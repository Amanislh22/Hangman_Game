#include <stdio.h> 
#include <DataStructures/BinaryTree.h>
char *arr[3] = { "ces", "ce", "des" };



int main()
 {

    BinaryTree tree;
    init_BinaryTree(&tree);
    tree.root->data = "a";
    Insert(&tree.root, 'a');

    for (int i = 0; i < 3; ++i)
    {
        printf("%s\n", arr[i]);
    }

    return 0; 
 }