cmake_minimum_required(VERSION 3.7 )
project(Proyecto1_Scrabble)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

#set(CMAKE_INCLUDE_CURRENT_DIR ON)
#set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets REQUIRED)

#list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)
#set(CMAKE_CXX_FLAGS "${Qt5Core_EXECUTABLE_COMPILE_FLAGS}")


set(CMAKE_CXX_STANDARD 11)


set(SOURCE_FILES
        main.cpp test.cpp

        communication/socketServer.cpp communication/socketServer.h
        communication/socketClient.cpp communication/socketClient.h

        dataStructures/linkedList/list.cpp dataStructures/linkedList/list.h
        dataStructures/linkedList/node.cpp dataStructures/linkedList/node.h

        gameLogic/gameBoard.cpp gameLogic/gameBoard.h
        gameLogic/player.cpp gameLogic/player.h
        gameLogic/words.cpp gameLogic/words.h
        gameLogic/chips.cpp gameLogic/chips.h

        util/dictionary.cpp util/dictionary.h


        )

add_executable(Proyecto1_Scrabble ${SOURCE_FILES})

qt5_use_modules(Proyecto1_Scrabble Widgets )


target_link_libraries(Proyecto1_Scrabble
        Qt5::Core
        Qt5::Widgets
#        Qt5:Gui
        )