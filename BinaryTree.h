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

    Node* Search(Node *root , char value);
    int sizeTree (Node* root) ;
  
    Node *Find_Word(Node *root, char *word, int size);
    Node *get_sbtree_by_num(Node *root, int n);
    int get_number_subtree(Node *root);
    Node *get_subtree_by_char(Node *root, char c);
};

#endif //HANGMAN_GAME_BINARYTREE_H
