//
// Created by amani on 13/01/24.
//

#ifndef HANGMAN_GAME_DIC_H
#define HANGMAN_GAME_DIC_H

#include <string>

void sortFile(const char* output , const char* input);
void readFile(const char* output);
void insertStringIntoFile(const char *filename, const std::string& content);
void deleteWordFromFile(const char* filename, const std::string& wordToDelete);
#endif //HANGMAN_GAME_DIC_H
