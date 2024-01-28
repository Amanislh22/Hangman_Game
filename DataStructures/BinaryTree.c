//
// Created by amani on 16/12/23.
//
#include <stddef.h>
#include "BinaryTree.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int get_number_subtree(node *root)
{
    node *tmp = root;
    int n = 0;
    while (tmp != NULL)
    {
        n = n + 1;
        printf("%c \n", tmp->data);
        tmp = tmp->right;
    }
    if (tmp != NULL)
        tmp->right = NULL;
    return n;
}
node *get_subtree_by_char(node *root, char c)
{

    node *tmp = root;
    while (tmp->data != c)
    {
        tmp = tmp->right;
    }
    return tmp;
}
node *get_sbtree_by_num(node *root, int n)
{
    node *tmp = root;
    while (n != 0)
    {
        tmp = tmp->right;
        n--;
    }
    return tmp;
}

node *Find_Word(node *root, char *word, int size)
{
    node *tmp = root;
    if (root == NULL)
        return NULL;
    for (int i = 0; i < size; i++)
    {
        tmp = Search(tmp, word[i]);
        if (tmp == NULL)
        {
            printf("word not found: %s \n", word);
            return root;
        }
        printf("Found %c \n", tmp->data);

        tmp = tmp->left;
        if (tmp->data == '0' && i == size)
        {
            printf("word found: %s\n", word);
            return root;
        }
    }
    return root;
}

node *insert_word(node *root, char *w, int j)
{

    if (root == NULL)
    { // create a new node
        for (int i = 0; i < strlen(w); i++)
        {
            root = push_left(root, w[i]);
        }
        w = "\0";
        root = push_left(root, '0');
    }
    else
    {
        if (root->right == NULL)
        {
            if (root->data == w[0])
            {
                // printf("diff \n");
                w = w + 1;
                root->left = insert_word(root->left, w, j);
                // w = w + 1;
                // root->left->right= insert_word(root->left->right, (w), j);
            }
            else
            {
                root = push_right(root, w[0]);
                // printf("d %c  \n", root->right->data);
                w = w + 1;
                root->right->left = insert_word(root->right->left, (w), j);
            }
        }
        else
        {
            root->right = insert_word(root->right, w, j);
        }
    }

    return root;
}

node *push_right(node *root, char item)
{
    if (root == NULL)
    {
        node *newnode = (node *)malloc(sizeof(node));
        if (newnode == NULL)
        {
            // Handle memory allocation failure
            printf("Memory allocation failed. Unable to insert new node.\n");
            return root;
        }
        init_node(newnode, item,true);
        root = newnode;

    }
    else
    {
        root->right= push_right(root->right, item);
        root->right->parent = root; 
    }
    return root;
}
node* push_left(node* root, char item)
{
	if(root==NULL)
	{
        node *newnode =(node*) malloc(sizeof(node));
		if (newnode == NULL)
		{
			// Handle memory allocation failure
			printf("Memory allocation failed. Unable to insert new node.\n");
			return root;
		}
     init_node(newnode,item,false);
	 root=newnode;
    }
	else 
    {
        root->left =push_left(root->left,item);
        root->left->parent =root;
    }
	return root;
}
void init_BinaryTree(BinaryTree *t){
    t->root = NULL;
    t->parent = NULL;
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
        init_node(newnode,item,false);
        root=newnode;
    }
    else if (NULL==root->left){
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
        return (1+ sizeTree(root->left)+ sizeTree(root->right));
    }
}
