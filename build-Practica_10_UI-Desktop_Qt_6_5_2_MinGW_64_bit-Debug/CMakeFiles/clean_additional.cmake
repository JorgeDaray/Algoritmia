# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Practica_4_UI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Practica_4_UI_autogen.dir\\ParseCache.txt"
  "Practica_4_UI_autogen"
  )
endif()
