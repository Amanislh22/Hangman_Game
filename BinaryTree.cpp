//
// Created by amani on 20/12/23.
//

#include "BinaryTree.h"

#include <iostream>



BinaryTree::BinaryTree() : root(nullptr) {}

Node* BinaryTree::Insert(Node* r, int item) {
    if (r == nullptr) {
        Node* newNode = new Node(item);
        r = newNode;
    } else if (item < r->data) {
        r->left = Insert(r->left, item);
    } else {
        r->right = Insert(r->right, item);
    }

    return r;
}

void BinaryTree::Insert(int item) {
    root = Insert(root, item);
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

Node* BinaryTree::Search(Node* r, int key) {
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
}
