//
// Created by amani on 16/12/23.
//

#ifndef HANGMANGAME_BINARYTREE_H
#define HANGMANGAME_BINARYTREE_H

#include "node.h"

typedef struct BinaryTree{
   node* root;
}BinaryTree;
void init_BinaryTree(BinaryTree *t);
node* Insert(node* root, char item);
void Preorder(node* root);
void Inorder(node* root);
void Postorder(node* root);
#endif //HANGMANGAME_BINARYTREE_H
