# Specify CMake version
cmake_minimum_required(VERSION 2.8)

# Project name goes here
project(tetrisplosion)

# Where the resulting binary will end up.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin/)

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  add_definitions(-std=c++0x)
  #set(CMAKE_CXX_COMPILER "/usr/local/bin/clang++")
  #set(CMAKE_CXX_FLAGS "-std=c++11 -stdlib=libc++ -Wall")
  #set(CMAKE_CXX_FLAGS_DEBUG          "-g")
  #set(CMAKE_CXX_FLAGS_MINSIZEREL     "-Os -DNDEBUG")
  #set(CMAKE_CXX_FLAGS_RELEASE        "-O4 -DNDEBUG")
  #set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-O2 -g")
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

# List of directories to find header files within.
include_directories(${SFML_INCLUDE_DIR})
include_directories(./include)

# List of subdirectories to run cmake on
add_subdirectory(lib)
add_subdirectory(extlibs)  # managing all external libraries.

# Direct that an execuable tetrisplosion should be built using main.cxx)
add_executable(tetrisplosion src/main.cxx)
target_link_libraries(tetrisplosion tetrisplosion_lib)
