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
#set(CMAKE_CXX_FLAGS "${Qt5Core_EXECUTABLE_COMPILE_FLAGS}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")


set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES
        main.cpp

        communication/socketServer.cpp communication/socketServer.h
        communication/socketClient.cpp communication/socketClient.h

        dataStructures/linkedList/list.cpp dataStructures/linkedList/list.h
        dataStructures/linkedList/node.cpp dataStructures/linkedList/node.h
        dataStructures/queue/clientQueue.cpp dataStructures/queue/clientQueue.h

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

#target_link_libraries(Proyecto1_Scrabble Qt5::Widgets mainwindow)