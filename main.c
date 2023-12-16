//
// Created by amani on 16/12/23.
//
#include <stdio.h>
#include "BinaryTree.h"

int main(){
    BinaryTree myTRee;
    init_BinaryTree(&myTRee);
    myTRee.root = Insert(myTRee.root, 'c');
    myTRee.root = Insert(myTRee.root, 'a');
    myTRee.root = Insert(myTRee.root, 'e');
    myTRee.root = Insert(myTRee.root, 'b');
    myTRee.root = Insert(myTRee.root, 'd');
    myTRee.root = Insert(myTRee.root, 'f');
    printf("display tree content\n Preorder\n");
    Preorder(myTRee.root);
    printf("\nInorder\n");
    Inorder(myTRee.root);
    printf("\nPostorder\n");
    Postorder(myTRee.root);
    printf("\n**************************");
    node* result;
    result = Search(myTRee.root,'b');
    if (result==NULL){
        printf("not found");
    }else
    {printf("\nitem found");}
    printf("\n**************************");
    int l = length(myTRee.root);
    printf("\n taille  = %d",l);
    printf("\n**************************");

    return 0;
}