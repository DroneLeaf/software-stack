# CMake generated Testfile for 
# Source directory: /home/droneleaf/software-stack/LeafMC/libs/shapelib
# Build directory: /home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/shapelib
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test2 "/usr/bin/bash" "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/shapelib/sed_scripted_test2.sh")
set_tests_properties(test2 PROPERTIES  _BACKTRACE_TRIPLES "/home/droneleaf/software-stack/LeafMC/libs/shapelib/CMakeLists.txt;271;add_test;/home/droneleaf/software-stack/LeafMC/libs/shapelib/CMakeLists.txt;0;")
add_test(test3 "/usr/bin/bash" "/home/droneleaf/software-stack/build-LeafMC-Desktop-Release/libs/shapelib/sed_scripted_test3.sh")
set_tests_properties(test3 PROPERTIES  _BACKTRACE_TRIPLES "/home/droneleaf/software-stack/LeafMC/libs/shapelib/CMakeLists.txt;277;add_test;/home/droneleaf/software-stack/LeafMC/libs/shapelib/CMakeLists.txt;0;")
subdirs("cmake")
