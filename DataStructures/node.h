//
// Created by amani on 16/12/23.
//

#ifndef HANGMANGAME_NODE_H
#define HANGMANGAME_NODE_H
// Define the structure for a binary tree node
#include <stdbool.h>
typedef struct node{
    char data;
    struct node* left;
    struct node* right;
    struct node *parent;
	bool id;// false: left || true: righ  

}node;
void init_node (node *n , char item,bool id);

#endif //HANGMANGAME_NODE_H
