cmake_minimum_required(VERSION 3.22)
project(Hangman_Game CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include_directories(.)

add_executable(Hangman_Game
        Node.h
        Node.cpp
		Hangman.cpp
        BinaryTree.h
        BinaryTree.cpp
        File_manipulation/dic.cpp)
