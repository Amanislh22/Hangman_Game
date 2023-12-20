//
// Created by amani on 20/12/23.
//

#ifndef HANGMAN_GAME_NODE_H
#define HANGMAN_GAME_NODE_H

// Node.h


class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int data);
};

#endif //HANGMAN_GAME_NODE_H


