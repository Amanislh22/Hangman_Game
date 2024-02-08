#ifndef PLAY_H
#define PLAY_H
#include "BinaryTree.h"
#include <iostream>
#include <cstring>
    void get_word_from_user(int size,Node* root,char* guessed_word  );
    int check_user_input(Node* root,char* guessed_word,char user_in, int len, int *arr) ;
    void  set_up_word(char*  word_toguess, int len_str);
    void update_guessed_word(char* word_toguess, int *arr, char c, int len_arr)  ;
    int play();
#endif // PLAY_H
