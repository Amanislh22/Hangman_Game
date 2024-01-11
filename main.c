#include "DataStructures/BinaryTree.h"
#include <stdio.h>
#include <string.h>
char *arr[3] = { "ces", "ce", "don" };

node *insert_word(node* root, char *w, int j)
{


  if (root == NULL) { // create a new node
    for (int i = 0; i < strlen(w); i++) {
      root = push_left(root, w[i]);
    }
	w="\0";
    root = push_left(root, '0');
  } 
  else {
    if (root->right == NULL) {
      if (root->data == w[0]) {
        //printf("diff \n");
        w = w + 1;
        root->left = insert_word(root->left, w, j);
		//w = w + 1;
		//root->left->right= insert_word(root->left->right, (w), j);
	  } else {
        root = push_right(root, w[0]);
        //printf("d %c  \n", root->right->data);
		w = w + 1;
		root->right->left = insert_word(root->right->left, (w), j);

      }
         }else {
      root->right = insert_word(root->right, w, j);
    }
  }

  return root;
}
int main()
 {
    char *s = "ci";
	char *s2 = "cas"; 
	//char *ptrs = s2; 



    int j = 0;
    BinaryTree tree;
    init_BinaryTree(&tree);
    tree.root= insert_word(tree.root, s2, j);
    tree.root = insert_word(tree.root, arr[1], j);
    tree.root = insert_word(tree.root, arr[0], j); 
	tree.root = insert_word(tree.root,s, j);
	tree.root = insert_word(tree.root, "de", j);
    tree.root = insert_word(tree.root, "des", j);
    tree.root = insert_word(tree.root,arr[2] , j);
	
    Inorder(tree.root);
    printf("\n");
	printf ("%c \n" , tree.root->data); 
    return 0;
}
