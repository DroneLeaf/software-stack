# software-stack
This is a deployment-only repo where you can find all stable software stack releases across all repos needed.

## Prosedure to create a new release (DRAFT)

1. Create a new branch with the name of the release.
2. Update the version in the package.xml file inside Msgs, FC, MC.

**Note:** The version should be in the format of x.y.z where x is the major version, y is the minor version, and z is the patch version.

**Note:** The following command should be done for Msgs, FC, MC:

3. 
```bash
bloom-generate rosdebian --ros-distro noetic
```
4. add -DHEAR_TARGET= in debian/rules in line 39
5. add --dpkg-shlibdeps-params=--ignore-missing-info in debian/rules to line 61
6. 
```bash
fakeroot debian/rules binary
```
you can find the .deb files in the parent folder

7. Move the generated .deb files to the dist folder

```bash
mv ../ros-noetic-*.deb ~/software-stack/dist/
```
9. zip the HEER_Configuration folder and move it to the dist folder (should be converted to ros package)

```bash
 zip -r1 HEAR_Configurations.zip  HEAR_Configurations
mv HEAR_Configurations.zip ~/software-stack/dist/
```

10. zip the PX4-Autopilot folder and move it to the dist folder

```bash
zip -r1 PX4-Autopilot.zip PX4-Autopilot
mv PX4-Autopilot.zip ~/software-stack/dist/
```

11. Create a new release in the software-stack repo with the name of the release using github cli
    
```bash
gh release create <release-name> ~/software-stack/dist/*
```