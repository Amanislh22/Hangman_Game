
# Hangman Game with Binary Search Tree

### Academic Year: 2023-2024
### Level: 1ING


---

## Project Objective

The goal of this project is to develop the Hangman game using a binary search tree. The objective is to enable quick word searches in the dictionary, provide efficiency in determining if a word is part of the dictionary, and facilitate the easy addition of new words.

---

## Features

- **Creation of a tree-based dictionary:** Game words will be stored in a text file and represented as a binary search tree.

- **Dictionary Management:** Ability to add, delete, and search for words.

- **Hangman Game:** Use of the binary search tree to represent the words to be guessed. In each turn, the player proposes a letter, and the program traverses the tree to check for the presence of the letter in the word to be guessed.

---

## More Details

### Dictionary Representation

The representation uses binary trees interpreted in a specific way. Each node N is the child of another node P. The right child of N corresponds to the next child of P in the original tree, and the left child of N corresponds to the first child of P in the original tree.

### Creating the Dictionary

1. Create a text file in the same directory as the project.
2. Include a minimum of 100 words, one word per line.

### Game Steps

- In each turn, the player proposes a letter to guess the word.
- The program traverses the tree based on the proposed letter.
- The letter is checked in the word to be guessed.
- The program displays the positions of the letter if present, otherwise, it draws part of the hangman.

### Game Options

- Multiple difficulty levels.
- The number of attempts varies based on the chosen level.

---

