//
// Created by amani on 12/02/24.
//

#ifndef HANGMAN_GAME_HANGMAN_FUNCTIONS_H
#define HANGMAN_GAME_HANGMAN_FUNCTIONS_H

#endif //HANGMAN_GAME_HANGMAN_FUNCTIONS_H
#include <iostream>
#include <vector>
using namespace std;
//declare functions
void greet();
void display_misses(int misses);
void display_status(std::vector<char> incorrect, string answer);
void end_game(string answer, string codeword);