# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/signals-slots-qt_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/signals-slots-qt_autogen.dir/ParseCache.txt"
  "signals-slots-qt_autogen"
  )
endif()
