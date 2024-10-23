# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appprueba-ui-qml_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appprueba-ui-qml_autogen.dir/ParseCache.txt"
  "appprueba-ui-qml_autogen"
  )
endif()
