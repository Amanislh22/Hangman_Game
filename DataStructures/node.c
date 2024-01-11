//
// Created by amani on 16/12/23.
//

#include "node.h"
#include <stddef.h>

// Function to initialize a binary tree node
void init_node (node *n, char item){
    n->data=item;
    n->left = NULL;
	n->right = NULL; 
	n->parent= NULL;
}
