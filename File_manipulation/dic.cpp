//
// Created by amani on 13/01/24.
//
#include <cstdlib>
#include "dic.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void sortFile(const char * output , const char* input ) {

    char command[256];
    snprintf(command, sizeof(command), "sort -o %s %s", output, input);

    // Use the system function to execute the sort command
    int result = system(command);

    // Check the result of the system call
    if (result == 0) {
        printf("Sorting successful.\n");
    } else {
        fprintf(stderr, "Sorting failed.\n");
    }

}


void readFile(const char* file_path) {
    std::ifstream file(file_path);

    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Unable to open file: " << file_path << std::endl;
    }
}
//insert a word in a file and then sort that file alph
    void insertStringIntoFile(const char *filename, const std::string& content) {
        std::ofstream outFile(filename, std::ios::app); // Open the file in append mode

        if (!outFile.is_open()) {
            std::cerr << "Error opening the file: " << filename << std::endl;
            return;
        }

        outFile << content; // Insert the string into the file

        outFile.close(); // Close the file

        //sort file
    sortFile(filename, filename);
    }
void deleteWordFromFile(const char* filename, const std::string& wordToDelete) {
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        std::cerr << "Error opening the file: " << filename << std::endl;
        return;
    }

    std::stringstream buffer;
    std::string line;

    while (std::getline(inFile, line)) {
        size_t pos = line.find(wordToDelete);
        while (pos != std::string::npos) {
            line.erase(pos, wordToDelete.length());
            pos = line.find(wordToDelete, pos);
        }
        buffer << line << std::endl;
    }

    inFile.close();

    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error opening the file: " << filename << std::endl;
        return;
    }

    outFile << buffer.str();
    outFile.close();
}

