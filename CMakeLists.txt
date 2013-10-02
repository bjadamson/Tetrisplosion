# Specify CMake version
cmake_minimum_required(VERSION 2.6)

# Project name goes here
project(tetsplosion)

# List of directories to find header files within.
include_directories(~/SFML/include)
include_directories(./include)


# List of subdirectories to run cmake on
# Look in the lib directory for lib files to build
add_subdirectory(out)
add_subdirectory(lib)
add_subdirectory(extlibs)  # managing all external libraries.
