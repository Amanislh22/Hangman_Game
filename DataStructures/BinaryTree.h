//
// Created by amani on 16/12/23.
//

#ifndef HANGMANGAME_BINARYTREE_H
#define HANGMANGAME_BINARYTREE_H

#include "node.h"
// Define the structure for the binary tree
typedef struct BinaryTree{
   node* root;
   node* parent; 
}BinaryTree;

// Function prototypes
// node *push_word()
node *push_right(node *root, char item);
node* push_left(node* root, char item);
void init_BinaryTree(BinaryTree *t);
node* Insert(node* root, char item);
void Preorder(node* root);
void Inorder(node* root);
void Postorder(node* root);
node* Search(node *root , char value);
int sizeTree (node* root) ;
#endif //HANGMANGAME_BINARYTREE_H
