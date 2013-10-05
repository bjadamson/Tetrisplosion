# Specify CMake version
cmake_minimum_required(VERSION 2.8)

# Project name goes here
project(tetsplosion)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin/)

# List of directories to find header files within.
#include_directories(~/SFML/include)
include_directories(./include)


# List of subdirectories to run cmake on
# Look in the lib directory for lib files to build
#add_subdirectory(out)
#add_subdirectory(lib)
#add_subdirectory(extlibs)  # managing all external libraries.
add_library(lib ./lib/test_lib.cxx)
#add_executable(mainDemo out/main.cxx)

# Compiler should look for include files here
#include_directories(${TETSPLOSION_SOURCE_DIR}/include)

# Linker should look for libraries here
#link_directories (${TETSPLOSION_SOURCE_DIR}/source)
#link_directories (${TETSPLOSION_SOURCE_DIR}/extlibs)

# Direct that an execuable mainDemo should be built using main.cxx)
add_executable(mainDemo out/main.cxx)

# link the executable to the library

#add_subdirectory(/home/badamson/SFML/)
#find_library(SFML_LINUX NAMES sfml-window PATH ./extlibs/sfml/x86_x64-linux/)
#target_link_libraries(mainDemo sfml-main sfml-system sfml-window sfml-graphics sfml-audio)
#find_library(SFML_LINUX NAMES sfml-window PATH ./extlibs/sfml/x86_x64-linux/)
#set(SFMLDIR /home/badamson/SFML/)
#set(SFML_DIR /home/badamson/SFML/)
find_package(SFML 2.1 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(lib ${SFML_LIBRARIES})
target_link_libraries(mainDemo lib)
#target_link_libraries(mainDemo ${SFML_LINUX})
#target_link_libraries(mainDemo lib)
