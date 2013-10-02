# Compiler should look for include files here
include_directories(${TETSPLOSION_SOURCE_DIR}/include)

# Linker should look for libraries here
link_directories (${TETSPLOSION_SOURCE_DIR}/source)
link_directories (${TETSPLOSION_SOURCE_DIR}/extlibs)

# Direct that an execuable mainDemo should be built using main.cxx)
add_executable(mainDemo main.cxx)

# link the executable to the library
target_link_libraries(mainDemo lib)
