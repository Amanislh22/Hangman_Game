//
// Created by amani on 16/12/23.
//

#ifndef HANGMANGAME_NODE_H
#define HANGMANGAME_NODE_H
typedef struct node{
    char data;
    struct node* left, *right;
}node;
void init_node (node *n );

#endif //HANGMANGAME_NODE_H
