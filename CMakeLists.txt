# CMake Version
cmake_minimum_required(VERSION 3.16)

# Set the CXX standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Project Name
project(CxxProjectTemplate)

# Library sources (include directory is included within this)
add_subdirectory(src)

# Enable Testing with GTest
enable_testing()
add_subdirectory(test)

# Add mini apps
add_subdirectory(apps)
