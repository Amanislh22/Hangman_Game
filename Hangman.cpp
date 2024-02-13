//
// Created by amani on 20/12/23.
//
#include "BinaryTree.h"
#include <iostream>
#include <cstring>
#include <sstream>
#include <list>
#include <vector>
#include "File_manipulation/dic.h"
#include <cstdlib>
// ANSI escape codes for text color
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define tab_size 11
using namespace std;
//jdyd
using namespace std;
/************************************************* functions  ******************************************************************/
void display_misses(int misses)
{
    if(misses==0)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
    else if(misses==1)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }else if(misses==2)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
    else if(misses==3)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
    else if(misses==4){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
    else if(misses==5)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" /    | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
    else if(misses==6)
    {
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" / \\  | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
    }
}
void greet() {
    // Use color for the greeting
    cout << "=====================\n";
    cout << GREEN << "Hangman: The Game\n";
    cout << "=====================\n";
    cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword.\n";
    cout << RESET;
}
void display_status(vector<char> incorrect, string answer)
{
    //cout<<"Incorrect Guesses: \n";

   /* for(int i = 0; i<incorrect.size(); i++)
    {
        cout<<incorrect[i]<<" ";
    }*/

    //cout<<"\nCodeword:\n";

    for(int i = 0; i<answer.length(); i++)
    {
        cout<<answer[i]<<" ";
    }
}


void end_game(string answer, string codeword)
{
    if(answer==codeword)
    {
        cout<<"Hooray! You saved the person from being hanged and earned a medal of honor!\n";
        cout<<"Congratulations!\n";
    }
    else
    {
        cout<<"On no! The man is hanged!\n";
    }
}

void get_word_from_user(int size,Node* root,char* guessed_word  );

void afficherMots(string s,list<string>& l,  Node*  a)
{
    if (a != NULL)
    {
        if (a->data != '\0')
        {
            if (a->left != NULL) //ajouter caractere a mot
            {
                string t = s + a->data ;
                afficherMots(t,l, a->left);
            }
            if (a->right != NULL) //fait rien et descendre droite
            {
                afficherMots(s,l, a->right);
            }
        }
        else
        {   l.push_back(s);
            cout<<s<<endl; // l'occurence du mot dans le dictionnaire
            //if (a->left != NULL)
            //  afficherMots(s,l, a->left);
        }
    }
}


void traverseNodes(stringstream& ss, string padding, string pointer, Node* node, bool hasRightSibling) {
    if (node != nullptr) {
        ss << "\n" << padding << pointer << node->data;

        string paddingBuilder = padding;
        if (hasRightSibling) {
            paddingBuilder += "│  ";
        } else {
            paddingBuilder += "   ";
        }

        string paddingForBoth = paddingBuilder;
        string pointerRight = "└──";
        string pointerLeft = (node->right != nullptr) ? "├──" : "└──";

        traverseNodes(ss, paddingForBoth, pointerLeft, node->left, node->right != nullptr);
        traverseNodes(ss, paddingForBoth, pointerRight, node->right, false);
    }
}



int check_user_input(Node* root,char* guessed_word,char user_in, int len, int *arr)
{
    BinaryTree t;
    Node *tmp = root;
    bool flag =false ;
    int j=0;
    if (root==NULL)
        return j ;
    for ( int i=0;i<len;i++)
    {
        tmp = t.Search(tmp,guessed_word[i]);
        if (tmp->data == user_in )
        {
            arr[j]=i;
            j++;
            flag=true;
        }
        tmp=tmp->left;
        if (tmp->data == '0'&& i==len)
        {
            return j;
        }


    }
    return j ;
}


void  set_up_word(char*  word_toguess, int len_str)
{
    // +1 for the null terminator
    for (int i = 0; i < len_str; i++) {
        word_toguess[i] = '*';
    }
    word_toguess[len_str] = '\0'; // Null-terminate the string
}
void update_guessed_word(char* word_toguess, int *arr, char c, int len_arr)
{
    // Initialize the array with asterisks
    // Update guessed letters in the array
    for (int i = 0; i < len_arr; i++) {

        word_toguess[arr[i]] = c;
    }


    printf("%s\n", word_toguess);

}


void get_word_from_user(int size,Node* root,char* guessed_word )
{
    BinaryTree t;
    printf("guessed word %s \n", guessed_word);
    t.Find_Word(root, guessed_word, size);
    Node* tmp=root;
    int state=0 ;
    char c;
    int arr[10];
    int i=0,j=0;
    char word_guessed[size+ 1];
    int misses=0;
    printf("enter the first char from the word you want to guess \n");
    set_up_word(word_guessed,size);
    printf("%s\n",word_guessed);
    while (i<size && misses<6)
    {
        scanf(" %c", &c);
        state = check_user_input(tmp,guessed_word, c,size,arr);
        if (state >0)
        {
            printf ("found  %c \n",c);
            update_guessed_word(word_guessed,arr,c, state);
            i+=state;
        }
        else {
            misses++;
            display_misses(misses);
            printf ("not found  %c \n",c);



        }
    }




    return ;
}


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
        system("clear");
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
        }else
        { system("clear");
            //cout<<"\nIncorrect! Another portion of the person has been drawn.\n";
            incorrect.push_back(letter);
            misses++;

        }
        guess = false;
    }

    end_game(answer, codeword);
    return 0;
}



