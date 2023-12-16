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
void Preorder(node* root){
    //root left right
    if ( root==NULL){
        return;
    }
    printf("%c \t",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(node* root){
    //left root right
    if (root==NULL){
        return;
    }
    Inorder(root->left);
    printf("%c \t",root->data);
    Inorder(root->right);
}
void Postorder(node* root){
    //left right root
    if ( root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%c \t",root->data);
}
