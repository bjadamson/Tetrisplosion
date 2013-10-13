set (SRCROOT ${PROJECT_SOURCE_DIR}/lib/event)

# list of source files
set(SRC
  ${SRCROOT}/event.cxx
  ${SRCROOT}/handle.cxx
  ${SRCROOT}/system.cxx
  ${SRCROOT}/filter.cxx
  )
source_group("" FILES ${SRC})
add_library(event_lib ${SRC})
