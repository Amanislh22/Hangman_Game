//
// Created by amani on 20/12/23.
//

#ifndef HANGMAN_GAME_BINARYTREE_H
#define HANGMAN_GAME_BINARYTREE_H

#include "Node.h"

class BinaryTRee { ;
public:
    Node *root;

    BinaryTRee() {
        root = nullptr;
    }

    Node *Insert(Node *r, int item) {
        if (r == nullptr) {
            Node *newnode = new Node(item);
            r = newnode;
        } else if (item < r->data)
            r->left = Insert(r->left, item);
        else
            r->right = Insert(r->right, item);

        return r;
    }

    void Insert(int item) {
        root = Insert(root, item);
    }

    void Preorder(Node *r) // root ->left->right
    {
        if (r == nullptr)
            return;
        cout << r->data << "\t";
        Preorder(r->left);
        Preorder(r->right);
    }

    void Inorder(Node *r) // left->root -> right
    {
        if (r == nullptr)
            return;

        Inorder(r->left);
        cout << r->data << "\t";
        Inorder(r->right);
    }

    void Postorder(Node *r) // left--> right->root
    {
        if (r == nullptr)
            return;
        Postorder(r->left);
        Postorder(r->right);
        cout << r->data << "\t";
    }

    Node *Search(Node *r, int key) {
        if (r == nullptr)
            return nullptr;
        else if (r->data == key)
            return r;
        else if (key < r->data)
            return Search(r->left, key);
        else
            return Search(r->right, key);
    }

    bool Search(int key) {
        Node *result = Search(root, key);

        if (result == nullptr)
            return false;
        else
            return true;
    }
};
#endif //HANGMAN_GAME_BINARYTREE_H
