//
// Created by amani on 20/12/23.
//
#include "BinaryTree.h"
#include "iostream"
#include "File_manipulation/dic.h"
#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;
using namespace std;
int main() {

    greet();

    string codeword = "codingcleverly";
    string answer = "______________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;


    while(answer!=codeword && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);

        cout<<"\n\nPlease enter your guess: ";
        cin>>letter;

        for(int i = 0; i<codeword.length(); i++)
        {
            if(letter==codeword[i])
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if(guess)
        {
            cout<<"\nCorrect!\n";
        }
        else
        {
            cout<<"\nIncorrect! Another portion of the person has been drawn.\n";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);
    return 0;
}

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


    /*
     char* inputFilePath = "/home/amani/CLionProjects/Hangman_Game/File_manipulation/dic.txt";
     char* outputFilePath = "/home/amani/CLionProjects/Hangman_Game/File_manipulation/result.txt";

    sortFile(outputFilePath,inputFilePath);
    readFile(outputFilePath);

    //test 5edmet mokhtar
    char *arr[3] = { "ces", "ce", "don" };
    char *s = "ci";
    char *s2 = "cas";
    //char *ptrs = s2;



    int j = 0;
    BinaryTree tree;
    //tree = new BinaryTree();
    //init_BinaryTree(&tree);
    tree.root= tree.insert_word(tree.root, s2, j);
    tree.root = tree.insert_word(tree.root, arr[1], j);
    tree.root = tree.insert_word(tree.root, arr[0], j);
    tree.root = tree.insert_word(tree.root,s, j);
    tree.root = tree.insert_word(tree.root, "de", j);
    tree.root = tree.insert_word(tree.root, "des", j);
    tree.root = tree.insert_word(tree.root,arr[2] , j);

    tree.Inorder(tree.root);
    printf("\n");
    printf ("%c \n" , tree.root->data);
    cout<< " ********************* test insert into file  *********************";
    insertStringIntoFile("/home/amani/CLionProjects/Hangman_Game/File_manipulation/result.txt", "amoun");
    deleteWordFromFile("/home/amani/CLionProjects/Hangman_Game/File_manipulation/result.txt","Dream");
     */
