//
// Created by amani on 20/12/23.
//

#include "BinaryTree.h"

#include <iostream>
#include <cstring>

#include<QDebug>
BinaryTree::BinaryTree() : root(nullptr) {}

// Function to initialize a binary tree
Node *BinaryTree::push_right(Node *root, QChar item)
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
Node *BinaryTree::push_left(Node* root, QChar item)
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
Node *BinaryTree::insert_word(Node* root, QString& w)
{


    if (root == nullptr) { // create a new node
        for (int i = 0; i < (int) w.length(); i++) {
            root = push_left(root, w[i]);
        }
        w.clear();
        root = push_left(root, '0');
    }
    else {
        if (root->right == nullptr) {
            if (root->data == w[0]) {
                //printf("diff \n");
                w.remove(0,1);
                root->left = insert_word(root->left, w);
                //w = w + 1;
                //root->left->right= insert_word(root->left->right, (w), j);
            } else {
                root = push_right(root, w[0]);
                //printf("d %c  \n", root->right->data);
                w.remove(0,1);
                root->right->left = insert_word(root->right->left, (w));

            }
        }else {
            root->right = insert_word(root->right, w);
        }
    }

    return root;
}


void BinaryTree::Preorder(Node* r) {
    if (r == nullptr)
        return;
    Preorder(r->left);
    Preorder(r->right);
}

void BinaryTree::Inorder(Node* r) {
    if (r == nullptr)
        return;

    Inorder(r->left);
//    std::cout << r->data << "\t";
    qDebug()<< r->data <<"\t";
    Inorder(r->right);
}

void BinaryTree::Postorder(Node* r) {
    if (r == nullptr)
        return;
    Postorder(r->left);
    Postorder(r->right);

//    std::cout << r->data << "\t";
}



Node* BinaryTree::Search(Node *root , QChar value){
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

Node *BinaryTree::Find_Word(Node *root, QString& word, int size)
{
    Node *tmp = root;
    if (root == NULL)
        return NULL;
    for (int i = 0; i < size; i++)
    {
        tmp = Search(tmp, word[i]);
        if (tmp == NULL)
        {
//            qDebug()<<"word not foun"<<  word;
            return root;
        }
        qDebug()<<"Found "<< tmp->data;

        tmp = tmp->left;
        if (tmp->data == '0' && i == size)
        {
//            qDebug()<<"word foun"<<  word;
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
        qDebug()<<tmp->data;
        tmp = tmp->right;
    }
    if (tmp != NULL)
        tmp->right = NULL;
    return n;
}
Node *BinaryTree::get_subtree_by_char(Node *root, QChar c)
{

    Node *tmp = root;
    while (tmp->data != c)
    {
        tmp = tmp->right;
    }
    return tmp;
}

int BinaryTree::check_user_input(Node *root, QString guessed_word, QChar user_in, int len, int *arr)
{
    Node *tmp = root;
//    bool flag =false ;
    int j=0;
    if (root==NULL)
        return j ;
    for ( int i=0;i<len;i++)
    {
        tmp = Search(tmp,guessed_word[i]);
        if (tmp->data == user_in )
        {
            arr[j]=i;
            j++;
//            flag=true;
        }
        tmp=tmp->left;
        if (tmp->data == '0'&& i==len)
        {
            return j;
        }


    }
    return j ;
}

void BinaryTree::Clear_tree(Node *root)
{
    while(root != NULL){
        Clear_tree(root->right);
        Clear_tree(root->left);
        free(root) ;
        root= NULL;
    }

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
