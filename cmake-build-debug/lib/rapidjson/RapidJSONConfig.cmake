################################################################################
# RapidJSON source dir
set( RapidJSON_SOURCE_DIR "/home/angelortizv/CLionProjects/Proyecto1_Scrabble/lib/rapidjson")

################################################################################
# RapidJSON build dir
set( RapidJSON_DIR "/home/angelortizv/CLionProjects/Proyecto1_Scrabble/cmake-build-debug/lib/rapidjson")

################################################################################
# Compute paths
get_filename_component(RapidJSON_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

set( RapidJSON_INCLUDE_DIR  "${RapidJSON_SOURCE_DIR}/include" )
set( RapidJSON_INCLUDE_DIRS  "${RapidJSON_SOURCE_DIR}/include" )
message(STATUS "RapidJSON found. Headers: ${RapidJSON_INCLUDE_DIRS}")
