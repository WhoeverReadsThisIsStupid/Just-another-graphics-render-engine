# CMakeList.txt: CMake-Projekt für "JAGRE". Schließen Sie die Quelle ein, und definieren Sie
# projektspezifische Logik hier.
#
cmake_minimum_required (VERSION 3.8)

project ("JAGRE" VERSION 0.1.0)
configure_file(JAGRE.h.in JAGRE.h)

add_executable (JAGRE "JAGRE.cpp" "JAGRE.h" "Math/MyVector.h" "Math/MyVector.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET JAGRE PROPERTY CXX_STANDARD 20)
endif()