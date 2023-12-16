//
// Created by amani on 16/12/23.
//
#include <stddef.h>
#include "BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>
void init_BinaryTree(BinaryTree *t){
    t->root = NULL;
}

node* Insert(node* root, char item){
    if(root==NULL){
        node *newnode = malloc(sizeof(node));
        if (newnode == NULL) {
            // Handle memory allocation failure
            printf("Memory allocation failed. Unable to insert new node.\n");
            return root;
        }
        init_node(newnode,item);
        root=newnode;
    }
    else if (item<root->data){
        root->left =Insert(root->left,item);
    }else{
        root->right= Insert(root->right,item);
    }
    return root;
}
