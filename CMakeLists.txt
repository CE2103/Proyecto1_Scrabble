cmake_minimum_required(VERSION 3.7 )
project(Proyecto1_Scrabble)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(THREADS_PREFER_PTHREAD_FLAG_ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Core 5.3 REQUIRED)

list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)
#set(CMAKE_CXX_FLAGS "${Qt5Core_EXECUTABLE_COMPILE_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")
set(CMAKE_CXX_STANDARD 11)


set( RapidJSON_SOURCE_DIR "lib/rapidjson")
set( RapidJSON_DIR "lib/rapidjson")

get_filename_component(RapidJSON_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

set( RapidJSON_INCLUDE_DIR  "@RapidJSON_INCLUDE_DIR@" )
set( RapidJSON_INCLUDE_DIRS  "@RapidJSON_INCLUDE_DIR@" )
message(STATUS "RapidJSON found. Headers: ${RapidJSON_INCLUDE_DIRS}")

set(SOURCE_FILES
        main.cpp

        communication/socketServer.cpp communication/socketServer.h
        communication/JSON/jsonComm.cpp communication/JSON/jsonComm.h

        dataStructures/linkedList/list.cpp dataStructures/linkedList/list.h
        dataStructures/linkedList/node.cpp dataStructures/linkedList/node.h
        dataStructures/queue/clientQueue.cpp dataStructures/queue/clientQueue.h

        gameLogic/chips.cpp gameLogic/chips.h
        gameLogic/gameBoard.cpp gameLogic/gameBoard.h
        gameLogic/player.cpp gameLogic/player.h
        gameLogic/words.cpp gameLogic/words.h

        serverTests/test.cpp

        util/dictionary.cpp util/dictionary.h

        )

add_executable(Proyecto1_Scrabble ${SOURCE_FILES})
#add_library(mainwindow tests/qt/mainwindow.cpp)

qt5_use_modules(Proyecto1_Scrabble Widgets Core Gui)

target_link_libraries(Proyecto1_Scrabble
        Qt5::Core
        Qt5::Widgets
#        Qt5:Gui
        )

target_link_libraries(Proyecto1_Scrabble ${CMAKE_THREAD_LIBS_INIT})

#target_link_libraries(Proyecto1_Scrabble Qt5::Widgets mainwindow)