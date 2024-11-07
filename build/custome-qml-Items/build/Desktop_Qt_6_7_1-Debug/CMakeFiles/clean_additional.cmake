# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appcustome-qml-Items_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appcustome-qml-Items_autogen.dir/ParseCache.txt"
  "appcustome-qml-Items_autogen"
  )
endif()
