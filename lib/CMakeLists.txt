set (SRCROOT ${PROJECT_SOURCE_DIR}/lib)

# list of source files
set(SRC
  ${SRCROOT}/tetrisplosion.cxx
  ${SRCROOT}/window_config.cxx
  ${SRCROOT}/test_lib.cxx
  )
source_group("" FILES ${SRC})
add_library(tetrisplosion_lib ${SRC})
find_package(SFML 2.1 COMPONENTS system window graphics network audio REQUIRED)
target_link_libraries(tetrisplosion_lib ${SFML_LIBRARIES})
