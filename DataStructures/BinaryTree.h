//
// Created by amani on 16/12/23.
//

#ifndef HANGMAN_GAME_BINARYTREE_H
#define HANGMAN_GAME_BINARYTREE_H

#include "node.h"
// Define the structure for the binary tree
typedef struct BinaryTree{
   node* root;
}BinaryTree;

// Function prototypes
void init_BinaryTree(BinaryTree *t);
node* Insert(node* root, char item);
void Preorder(node* root);
void Inorder(node* root);
void Postorder(node* root);
node* Search(node *root , char value);
int sizeTree (node* root) ;
#endif //HANGMAN_GAME_BINARYTREE_H
