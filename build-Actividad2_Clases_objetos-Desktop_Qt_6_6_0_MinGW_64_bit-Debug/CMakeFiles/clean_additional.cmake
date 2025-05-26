# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Actividad2_Clases_objetos_autogen"
  "CMakeFiles\\Actividad2_Clases_objetos_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Actividad2_Clases_objetos_autogen.dir\\ParseCache.txt"
  )
endif()
