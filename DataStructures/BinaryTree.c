//
// Created by amani on 16/12/23.
//
#include <stddef.h>
#include "BinaryTree.h"
#include <stdlib.h>
#include <stdio.h>

// Function to initialize a binary tree
void init_BinaryTree(BinaryTree *t){
    t->root = NULL;
}

// Function to insert a new node into the binary tree
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

// Function to perform Preorder traversal of the binary tree
void Preorder(node* root){
    //root left right
    if ( root==NULL){
        return;
    }
    printf("%c \t",root->data);
    Preorder(root->left);
    Preorder(root->right);
}

// Function to perform Inorder traversal of the binary tree
void Inorder(node* root){
    //left root right
    if (root==NULL){
        return;
    }
    Inorder(root->left);
    printf("%c \t",root->data);
    Inorder(root->right);
}

// Function to perform Postorder traversal of the binary tree
void Postorder(node* root){
    //left right root
    if ( root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%c \t",root->data);
}

node* Search(node *root , char value){
    if ( root==NULL){
        return NULL;
    }
    else if (root->data==value){
        return root;}
    else if (root->data<value){
        return Search(root->right,value);}
    else {
        return Search(root->left, value);
    }

}

int sizeTree (node* root){
    if (root==NULL){
        return 0;
    }else {
        return (1+ length(root->left)+ length(root->right));
    }
}