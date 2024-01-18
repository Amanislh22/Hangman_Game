// BinaryTree.h
#ifndef HANGMAN_GAME_BINARYTREE_H
#define HANGMAN_GAME_BINARYTREE_H

#include "Node.h"

class BinaryTree {
public:
    Node *root;

    // Constructor
    BinaryTree();

    // Function to insert a node
    /*Node *Insert(Node *r, int item);
    void Insert(int item);*/

    Node *push_right(Node *root, char item);
    Node* push_left(Node* root, char item);
    Node* insert_word(Node* , char* ,int);


    // Traversal functions
    void Preorder(Node *r);
    void Inorder(Node *r);
    void Postorder(Node *r);

    /*
    // Search function
    Node *Search(Node *r, int key);
    bool Search(int key);
     */
};

#endif //HANGMAN_GAME_BINARYTREE_H
