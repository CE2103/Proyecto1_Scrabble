cmake_minimum_required(VERSION 3.13)
project(Proyecto1_Scrabble)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp test.cpp
                 util/dictionary.cpp
                 dataStructures/linkedList/list.cpp dataStructures/linkedList/node.cpp
                 gameLogic/gameBoard.cpp gameLogic/player.cpp
        )

find_package(Qt5Widgets REQUIRED)

add_executable(Proyecto1_Scrabble ${SOURCE_FILES})

target_link_libraries(Proyecto1_Scrabble Qt5::Widgets)