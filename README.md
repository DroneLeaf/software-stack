# software-stack
This is a deployment-only repo where you can find all stable software stack releases across all repos needed.

## Prosedure to create a new release (DRAFT)

1. Create a new branch with the name of the release.
2. Update the version in the package.xml file inside Msgs, FC, MC.

**Note:** The version should be in the format of x.y.z where x is the major version, y is the minor version, and z is the patch version.

install rapidjson system level
install cpr system level

CMakeLists changes for MC, FC (should be tested and committed to the respective repos)
```cmake
include(CheckIncludeFileCXX)

...

function(get_all_targets var)
    set(targets)
    get_all_targets_recursive(targets ${CMAKE_CURRENT_SOURCE_DIR}/Missions) # change the path to the directory where the targets are (e.g. Missions, HEAR_executables, ...)
    set(${var} ${targets} PARENT_SCOPE)
endfunction()

macro(get_all_targets_recursive targets dir)
    get_property(subdirectories DIRECTORY ${dir} PROPERTY SUBDIRECTORIES)
    foreach(subdir ${subdirectories})
        get_all_targets_recursive(${targets} ${subdir})
    endforeach()

    get_property(current_targets DIRECTORY ${dir} PROPERTY BUILDSYSTEM_TARGETS)
    list(APPEND ${targets} ${current_targets})
endmacro()

get_all_targets(all_targets)
message("All targets: ${all_targets}")

install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)

install(FILES ${CMAKE_SOURCE_DIR}/../lib/linux-x64/libonnxruntime.so.1.15.1
    DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)

install(TARGETS ${all_targets}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)
```
Change the way of linking rapidjson and cpr in the CMakeLists.txt file in the FC and MC repos
```cmake
# target_link_libraries( ${PROJECT_NAME}  rapidjson)
target_link_libraries( ${PROJECT_NAME}) # remove as it's system level installed now
```



**Note:** the following command should be done for Msgs, FC, MC

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
zip -r HEER_Configuration.zip HEER_Configuration
mv HEER_Configuration.zip ~/software-stack/dist/
```

10. zip the PX4-Autopilot folder and move it to the dist folder

```bash
zip -r PX4-Autopilot.zip PX4-Autopilot
mv PX4-Autopilot.zip ~/software-stack/dist/
```

11. Create a new release in the software-stack repo with the name of the release using github cli
    
```bash
gh release create <release-name> ~/software-stack/dist/*
```