//
// Created by amani on 16/12/23.
//

#include "node.h"
#include <stddef.h>

void init_node (node *n){
    n->data='\0';
    n->left = n->right = NULL;
}