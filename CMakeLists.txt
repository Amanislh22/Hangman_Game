cmake_minimum_required(VERSION 3.27)
project(Hangman_Game CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(Hangman_Game
        Node.h
        Node.cpp
        main.cpp
        BinaryTree.h
        BinaryTree.cpp
        File_manipulation/dic.cpp)
