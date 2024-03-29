//
// Created by amani on 13/01/24.
//
#include <cstdlib>
#include "dic.h"
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
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
