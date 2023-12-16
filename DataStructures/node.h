//
// Created by amani on 16/12/23.
//

#ifndef HANGMANGAME_NODE_H
#define HANGMANGAME_NODE_H
// Define the structure for a binary tree node
typedef struct node{
    char data;
    struct node* left, *right;
}node;
void init_node (node *n , char item);

#endif //HANGMANGAME_NODE_H
