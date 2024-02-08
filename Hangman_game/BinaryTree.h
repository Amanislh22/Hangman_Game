// BinaryTree.h
#ifndef HANGMAN_GAME_BINARYTREE_H
#define HANGMAN_GAME_BINARYTREE_H

#include "Node.h"
#include<QString>
class BinaryTree {
public:
    Node *root;

    // Constructor
    BinaryTree();

    // Function to insert a node
    /*Node *Insert(Node *r, int item);
    void Insert(int item);*/

    Node *push_right(Node *root, QChar item);
    Node* push_left(Node* root, QChar item);
    Node* insert_word(Node* , QString& );


    // Traversal functions
    void Preorder(Node *r);
    void Inorder(Node *r);
    void Postorder(Node *r);

    Node* Search(Node *root , QChar value);
    int sizeTree (Node* root) ;
  
    Node *Find_Word(Node *root, QString& word, int size);
    Node *get_sbtree_by_num(Node *root, int n);
    int get_number_subtree(Node *root);
    Node *get_subtree_by_char(Node *root, QChar c);
    int check_user_input(Node* root,QString guessed_word,QChar user_in, int len, int *arr);

};

#endif //HANGMAN_GAME_BINARYTREE_H
