# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ShadowKnifeApplicationWindows_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ShadowKnifeApplicationWindows_autogen.dir\\ParseCache.txt"
  "ShadowKnifeApplicationWindows_autogen"
  )
endif()
