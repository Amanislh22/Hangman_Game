//
// Created by amani on 20/12/23.
//

#include "BinaryTree.h"

#include <iostream>
#include <cstring>


BinaryTree::BinaryTree() : root(nullptr) {}

// Function to initialize a binary tree
Node *BinaryTree::push_right(Node *root, char item)
{
    if (root == nullptr)
    {
        Node *newnode = (Node *)malloc(sizeof(Node));
        if (newnode == nullptr)
        {
            // Handle memory allocation failure
            printf("Memory allocation failed. Unable to insert new node.\n");
            return root;
        }
        newnode = new Node(item);
        root = newnode;

    }
    else
    {
        root->right= push_right(root->right, item);
        root->right->parent = root;
    }
    return root;
}
Node *BinaryTree::push_left(Node* root, char item)
{
    if(root==nullptr)
    {
        Node *newnode =(Node*) malloc(sizeof(Node));
        if (newnode == nullptr)
        {
            // Handle memory allocation failure
            printf("Memory allocation failed. Unable to insert new node.\n");
            return root;
        }
        newnode = new Node(item);
        root=newnode;
    }
    else
    {
        root->left =push_left(root->left,item);
        root->left->parent =root;
    }
    return root;
}
Node *BinaryTree::insert_word(Node* root, char *w, int j)
{


    if (root == nullptr) { // create a new node
        for (int i = 0; i < strlen(w); i++) {
            root = push_left(root, w[i]);
        }
        w="\0";
        root = push_left(root, '0');
    }
    else {
        if (root->right == nullptr) {
            if (root->data == w[0]) {
                //printf("diff \n");
                w = w + 1;
                root->left = insert_word(root->left, w, j);
                //w = w + 1;
                //root->left->right= insert_word(root->left->right, (w), j);
            } else {
                root = push_right(root, w[0]);
                //printf("d %c  \n", root->right->data);
                w = w + 1;
                root->right->left = insert_word(root->right->left, (w), j);

            }
        }else {
            root->right = insert_word(root->right, w, j);
        }
    }

    return root;
}


void BinaryTree::Preorder(Node* r) {
    if (r == nullptr)
        return;
    std::cout << r->data << "\t";
    Preorder(r->left);
    Preorder(r->right);
}

void BinaryTree::Inorder(Node* r) {
    if (r == nullptr)
        return;

    Inorder(r->left);
    std::cout << r->data << "\t";
    Inorder(r->right);
}

void BinaryTree::Postorder(Node* r) {
    if (r == nullptr)
        return;
    Postorder(r->left);
    Postorder(r->right);
    std::cout << r->data << "\t";
}


/*Node* BinaryTree::Search(Node* r, int key) {
    if (r == nullptr)
        return nullptr;
    else if (r->data == key)
        return r;
    else if (key < r->data)
        return Search(r->left, key);
    else
        return Search(r->right, key);
}

bool BinaryTree::Search(int key) {
    Node* result = Search(root, key);
    return result != nullptr;
}*/

Node* BinaryTree::Search(Node *root , char value){
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
int BinaryTree::sizeTree (Node* root){
    if (root==NULL){
        return 0;
    }else {
        return (1+ sizeTree(root->left)+ sizeTree(root->right));
    }
}

Node *BinaryTree::Find_Word(Node *root, char *word, int size)
{
    Node *tmp = root;
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
int BinaryTree::get_number_subtree(Node *root)
{
    Node *tmp = root;
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
Node *BinaryTree::get_subtree_by_char(Node *root, char c)
{

    Node *tmp = root;
    while (tmp->data != c)
    {
        tmp = tmp->right;
    }
    return tmp;
}
Node *BinaryTree::get_sbtree_by_num(Node *root, int n)
{
    Node *tmp = root;
    while (n != 0)
    {
        tmp = tmp->right;
        n--;
    }
    return tmp;
}