cmake_minimum_required(VERSION 3.7 )
project(Proyecto1_Scrabble)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Core 5.3 REQUIRED)

list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)

set( RapidJSON_SOURCE_DIR "lib/rapidjson")
set( RapidJSON_DIR "lib/rapidjson")

get_filename_component(RapidJSON_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

set( RapidJSON_INCLUDE_DIR  "@RapidJSON_INCLUDE_DIR@" )
set( RapidJSON_INCLUDE_DIRS  "@RapidJSON_INCLUDE_DIR@" )
message(STATUS "RapidJSON found. Headers: ${RapidJSON_INCLUDE_DIRS}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES
        main.cpp

        dataStructures/linkedList/list.cpp
        dataStructures/linkedList/node.cpp

        communication/JSON/jsonComm.cpp
        communication/socket/socket.cpp

        gameInterface/main.cpp
        gameInterface/gameBoard.cpp
        dataStructures/linkedList/nodoespecial.cpp

        gameLogic/principal.cpp
        gameLogic/util.cpp)

add_executable(Proyecto1_Scrabble ${SOURCE_FILES})

qt5_use_modules(Proyecto1_Scrabble Widgets Core Gui)

target_link_libraries(Proyecto1_Scrabble
        Qt5::Core
        Qt5::Widgets)

target_link_libraries(Proyecto1_Scrabble ${CMAKE_THREAD_LIBS_INIT})
