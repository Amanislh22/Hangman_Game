//
// Created by amani on 20/12/23.
//
#include "BinaryTree.h"
int main() {
    //45, 15, 79, 90, 10, 55, 12, 20, 50
    BinaryTRee btree;
    btree.Insert(45);
    btree.Insert(15);
    btree.Insert(79);
    btree.Insert(90);
    btree.Insert(10);
    btree.Insert(55);
    btree.Insert(12);
    btree.Insert(20);
    btree.Insert(50);

    cout << " Display the Tree Contenet \n";
    cout << "\n...............................PREORDER...............................................\n";
    btree.Preorder(btree.root);
    cout << "\n...............................INORDER...............................................\n";
    btree.Inorder(btree.root);
    cout << "\n..................................POSTORDER............................................\n";
    btree.Postorder(btree.root);
    cout << "\n..............................................................................\n";

    int key;
    cout << " Enter item to search for \n";
    cin >> key;
    if (btree.Search(key))
        cout << "Item Found \n";
    else
        cout << "Sorry , item not found \n";
}