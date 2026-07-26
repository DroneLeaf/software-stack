# Staging Approach - Dev Debian Packages (leaf-fc-ros2)

## Why?

Right now, the `leaf-fc-ros2` Debian package is only built and published when a GitHub Release is created. This means a developer can't test a mid-sprint change on a real RPI target without cutting a full release — which is too heavy.

**The goal**: when a GitHub Release is created with a tag that contains `dev` in its name (e.g. `v1.2.3-dev`, `dev-1.2.3`), the pipeline automatically builds and publishes a `leaf-fc-ros2-dev` variant to the same APT repos. Operators on test targets can `apt install leaf-fc-ros2-dev` and always get the latest dev build, completely separated from the production package.

---

## How the current pipeline works

The `leaf_fc_ros2.yml` workflow follows a two-job pattern:

| Job | Runner | What it does |
|---|---|---|
| `build` | `Linux_ARM64_16core` | Clones HEAR_Docker, builds a ROS2 Docker image via `docker buildx`, extracts the compiled `HEAR_FC/install` folder from the container, uploads as an artifact |
| `deploy` | `ubuntu-latest` | Downloads the artifact, configures UPM with the release version, packages a `.deb` via `upm_cli`, uploads to both APT repos (`apt.droneleaf.io` and `repo.droneleaf.io`) |

Both jobs are gated on `contains(github.event.release.name, 'ros2')` — the release **name** must contain `ros2` to prevent this workflow from firing on unrelated releases.

Only one matrix target exists: **RPI** (`rpi_release` profile, `RPI-Release` deb suffix).

---

## What changes

### 1. Single trigger: `release created`

The workflow keeps exactly the same `release: [created]` trigger. No new trigger is added.

### 2. Production-only jobs: `build` and `deploy` gain a `!dev` guard

The existing jobs now skip when the release tag contains `"dev"`:

```yaml
build:
  if: contains(github.event.release.name, 'ros2') && !contains(github.ref_name, 'dev')

deploy:
  if: contains(github.event.release.name, 'ros2') && !contains(github.ref_name, 'dev')
  needs: [build]
```

### 3. Two new jobs (Staging): `build-dev` and `deploy-dev`

These run only when the release tag contains `"dev"`:

```yaml
build-dev:
  if: contains(github.event.release.name, 'ros2') && contains(github.ref_name, 'dev')

deploy-dev:
  if: contains(github.event.release.name, 'ros2') && contains(github.ref_name, 'dev')
  needs: [build-dev]
```

---

## `build-dev` job

Runs on the same **`Linux_ARM64_16core`** runner (the compiled output is ARM64 code for RPI — cross-compilation is not used here). Does everything the production `build` does **except**:

- **No AWS / ECR steps** — the Docker image is built and used locally only (`--load`); it is never pushed to ECR.
- **No DroneLeaf registry login** — not pushing to the external registry either.
- **Version is hardcoded to `0.0.0`** — no 5-priority version extraction chain:
  ```bash
  echo "VERSION=0.0.0" >> $GITHUB_ENV
  ```
- **Docker image tag is `:dev`** (not `:latest`):
  ```bash
  -t heaf_fc_ros2_rpi:dev \
  ```
- **Docker builder name is `jazzyBuilder_dev`** to avoid conflicts with a concurrently running production builder.
- **Artifact names carry a `_dev` suffix** to avoid colliding with production artifacts:
  ```yaml
  name: upm_extracted_files_ros2_rpi_dev
  ```
- Does **not** upload a `.tar.gz` to the GitHub Release — dev builds don't need release assets.

---

## `deploy-dev` job

Runs on `ubuntu-latest`. Depends on `build-dev`. Same matrix (RPI only). Differences from production `deploy`:

- **No AWS / ECR steps**.
- **Version is `0.0.0`** — no version extraction, just:
  ```bash
  echo "VERSION=0.0.0" >> $GITHUB_ENV
  ```
- **Downloads the `_dev` artifact**:
  ```yaml
  name: upm_extracted_files_ros2_rpi_dev
  ```
- **Uses the same UPM definition** (`leaf_fc_ros2`, `rpi_release` profile) — no changes needed in the UPM repo.
- **After `upm_cli package`, the `.deb` is repacked** to rename it as a dev package:
  1. `dpkg-deb -R` — extract `leaf-fc-ros2-0.0.0-RPI-Release.deb`
  2. Patch `DEBIAN/control`:
     - `Package:` → `leaf-fc-ros2-dev`
     - `Version:` → `0.0.0`
     - `Description:` → `DEV BUILD - tag: <tag> | commit: <sha>`
  3. `dpkg-deb --build` — re-package into `leaf-fc-ros2-dev-0.0.0-RPI-Release.deb`
- **Both APT deploys use the repacked file** — `upm_cli deploy` and the `curl` to `repo.droneleaf.io` both reference the `*-dev-0.0.0-*.deb` path.
- Installs as: `sudo apt install leaf-fc-ros2-dev`

---

## Job dependency graph

```
On release with tag NOT containing "dev" (e.g. ros2-v1.2.3):

leaf_fc_ros2.yml
────────────────────────────────
build  (Linux_ARM64_16core)
  └─ deploy  (ubuntu-latest)
       └─ RPI matrix

On release with tag containing "dev" (e.g. ros2-v1.2.3-dev):

leaf_fc_ros2.yml
────────────────────────────────
build-dev  (Linux_ARM64_16core)
  └─ deploy-dev  (ubuntu-latest)
       └─ RPI matrix
```

---

## Version strategy

| Package | Version | Overwrite on APT? |
|---|---|---|
| Production (`leaf-fc-ros2`) | From git tag (e.g. `1.2.3`) | No — each release is a new version |
| Dev (`leaf-fc-ros2-dev`) | Always `0.0.0` | **Yes** — intentionally overwritten on every dev release |

The dev version is fixed at `0.0.0` deliberately. The APT repo always holds the latest dev build. Because the version never changes, `apt upgrade` will **not** update it automatically — operators must use `--reinstall` to pull the latest build.

---

## No UPM repo changes needed

Dev packages reuse the existing `leaf_fc_ros2` UPM definition without modification. UPM packages the `.deb` normally under version `0.0.0`, then CI unpacks it, patches `DEBIAN/control`, and re-packages it under the `leaf-fc-ros2-dev` name. The UPM repo requires no new entries.

The only external requirement: both APT repos must allow re-uploading a package at the same version string (`0.0.0`) on each dev release — confirm this is configured for `leaf-fc-ros2-dev`.

---

## How to install

> **Warning — conflict:** Both the production and dev packages install the same service and bind the same system resources. Do not install both at the same time.

**Switching from production → dev:**
```bash
sudo apt remove leaf-fc-ros2
sudo apt update
sudo apt install leaf-fc-ros2-dev
```

**Switching from dev → production:**
```bash
sudo apt remove leaf-fc-ros2-dev
sudo apt update
sudo apt install leaf-fc-ros2
```

**Updating the dev package after a new dev release:**
```bash
sudo apt update
sudo apt install --reinstall leaf-fc-ros2-dev
```

> Note: `apt upgrade` will **not** update dev packages because the version is always `0.0.0`. Use `--reinstall` to pull the latest build.

Dev packages never appear on production targets unless someone explicitly installs them. Production packages are never affected by dev releases.

---

## Files modified

| File | What changed |
|---|---|
| `.github/workflows/leaf_fc_ros2.yml` | Added `!contains(github.ref_name, 'dev')` guards on `build` + `deploy`; added `build-dev` + `deploy-dev` jobs |
| `staging-approach.md` | This document |

**No changes needed in `DroneLeaf/UPM`.** The repack approach reuses the existing `leaf_fc_ros2` definition as-is.
