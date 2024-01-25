//
// Created by amani on 20/12/23.
//
#include "BinaryTree.h"
#include "iostream"
#include "File_manipulation/dic.h"

using namespace std;
int main() {


    /*
    //45, 15, 79, 90, 10, 55, 12, 20, 50
    BinaryTree btree;
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
        */
     char* inputFilePath = "/home/amani/CLionProjects/Hangman_Game/File_manipulation/dic.txt";
     char* outputFilePath = "/home/amani/CLionProjects/Hangman_Game/File_manipulation/result.txt";

    sortFile(outputFilePath,inputFilePath);
    readFile(outputFilePath);

    //test 5edmet mokhtar
    char *arr[3] = { "ces", "ce", "don" };
    char *arr2[100] = {"ces", "ce", "don", "word1", "word2", "word3", "word4", "word5", "word6", "word7",
                       "word8", "word9", "word10", "word11", "word12", "word13", "word14", "word15", "word16",
                       "word17", "word18", "word19", "word20", "word21", "word22", "word23", "word24", "word25",
                       "word26", "word27", "word28", "word29", "word30", "word31", "word32", "word33", "word34",
                       "word35", "word36", "word37", "word38", "word39", "word40", "word41", "word42", "word43",
                       "word44", "word45", "word46", "word47", "word48",  "word49" } ;

    char *s = "ci";
    char *s2 = "cas";
    //char *ptrs = s2;



    int j = 0;
    BinaryTree tree;
    /*
    tree.root= tree.insert_word(tree.root, s2, j);
    tree.root = tree.insert_word(tree.root, arr[1], j);
    tree.root = tree.insert_word(tree.root, arr[0], j);
    tree.root = tree.insert_word(tree.root,s, j);
    tree.root = tree.insert_word(tree.root, "de", j);
    tree.root = tree.insert_word(tree.root, "des", j);
    tree.root = tree.insert_word(tree.root,arr[2] , j);
*/
    for ( int i=0;i<50;i++){
        tree.root= tree.insert_word(tree.root, arr2[i], j);
    }

    tree.Inorder(tree.root);
    printf("\n");
    //printf ("%c \n" , tree.root->data);
}