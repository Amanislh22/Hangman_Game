//
// Created by amani on 20/12/23.
//

#ifndef HANGMAN_GAME_NODE_H
#define HANGMAN_GAME_NODE_H

// Node.h


class Node {
public:
    char data;
    Node* left;
    Node* right;
    Node* parent;

    // Constructor
    Node(char data);
};

#endif //HANGMAN_GAME_NODE_H


