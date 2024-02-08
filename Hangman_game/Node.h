//
// Created by amani on 20/12/23.
//

#ifndef HANGMAN_GAME_NODE_H
#define HANGMAN_GAME_NODE_H

// Node.h
#include<QString>

class Node {
public:
    QChar data;
    Node* left;
    Node* right;
    Node* parent;

    // Constructor
    Node(QChar data);
};

#endif //HANGMAN_GAME_NODE_H


