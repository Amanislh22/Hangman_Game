#include "DataStructures/BinaryTree.h"
#include <stdio.h>
#include <string.h>
#define tab_size 11
char *arr[tab_size] = {"cas","cassette", "ce", "ces","ci","de","des", "don","fas","font","kas" };
void get_word_from_user(int size,node* root,char* guessed_word  );





int check_user_input(node* root,char* guessed_word,char user_in, int len, int *arr)
{
	node* tmp = root; 
	bool flag =false ; 
	int j=0; 
if (root==NULL)
	return j ; 
for ( int i=0;i<len;i++)
{
	tmp = Search(tmp,guessed_word[i]);
    if (tmp->data == user_in )
	{
		arr[j]=i;
		j++;
		flag=true;
	}
		tmp=tmp->left;
	if (tmp->data == '0'&& i==len)
    {
      return j;   
    }
	

}
return j ;
}


int main()
 {

    int j = 0;
    BinaryTree tree;
    init_BinaryTree(&tree);
	for (int i = 0; i<tab_size;i++)
	{
    tree.root = insert_word(tree.root, arr[i], j);
	}  
    Inorder(tree.root);
    printf("\n");
	printf ("%c \n" , tree.root->data); 

	tree.root = Find_Word(tree.root, arr[0], strlen(arr[0]));
	printf("-------\n");
    
	tree.root = Find_Word(tree.root, arr[2], strlen(arr[2]));
	printf("-------\n");
    
	tree.root = Find_Word(tree.root,"fon", strlen("font"));
	printf("-------\n");

    printf ("number of subtree, %d \n",get_number_subtree(tree.root)); 

    node* sub = get_sbtree_by_num(tree.root,0);
	node* sub1 = get_subtree_by_char(tree.root,'k'); 
	printf ("sub data : %c \n ", sub->data); 

	printf ("sub size : %d \n", sizeTree(sub));
	printf("%c \n",sub1->data);;
	get_word_from_user(strlen(arr[1]), sub,arr[1]);
	printf("-------\n");
    return 0;
}

void  set_up_word(char*  word_toguess, int len_str)
{
	 // +1 for the null terminator
   for (int i = 0; i < len_str; i++) {
        word_toguess[i] = '*';
    }
    word_toguess[len_str] = '\0'; // Null-terminate the string
}
void update_guessed_word(char* word_toguess, int *arr, char c, int len_arr)  
	{
    // Initialize the array with asterisks
     // Update guessed letters in the array
    for (int i = 0; i < len_arr; i++) {
        
            word_toguess[arr[i]] = c;
        }
    

    printf("%s\n", word_toguess);
	
}


void get_word_from_user(int size,node* root,char* guessed_word )
{
	printf ("guessed word %s \n", guessed_word);
	Find_Word(root, guessed_word, size);
	node* tmp=root;
	int state=0 ; 
    char c;
	int arr[10];
	int i=0,j=0;
	char word_guessed[size+ 1];
	printf("enter the first char from the word you want to guess \n");
	set_up_word(word_guessed,size);
	printf("%s\n",word_guessed);
	while (i<size)
	{
        scanf(" %c", &c); 	
		state = check_user_input(tmp,guessed_word, c,size,arr);
		if (state >0) 
		{ 
			printf ("found  %c \n",c);
			update_guessed_word(word_guessed,arr,c, state);
			i+=state; 
			}
		else {
			printf ("not found  %c \n",c);



    }
	}


   

return ;
}
