# Specify CMake version
cmake_minimum_required(VERSION 2.8)

# Project name goes here
project(tetrisplosion)

# Where the resulting binary will end up.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin/)

# List of directories to find header files within.
include_directories(${SFML_INCLUDE_DIR})
include_directories(./include)

# List of subdirectories to run cmake on
add_subdirectory(lib)
add_subdirectory(extlibs)  # managing all external libraries.

# Direct that an execuable tetrisplosion should be built using main.cxx)
add_executable(tetrisplosion src/main.cxx)
target_link_libraries(tetrisplosion tetrisplosion_lib)
