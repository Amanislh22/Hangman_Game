//
// Created by amani on 20/12/23.
//

#ifndef HANGMAN_GAME_NODE_H
#define HANGMAN_GAME_NODE_H

#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left, * right;
    Node(int value){
        data = value;
        left = right = nullptr;
    }
};
        

#endif //HANGMAN_GAME_NODE_H
