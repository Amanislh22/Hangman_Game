//
// Created by amani on 20/12/23.
//
#include "BinaryTree.h"
#include <iostream>
#include <cstring>
#include <sstream>
#include <list>
#include "File_manipulation/dic.h"
#define tab_size 11
using namespace std;
 char *arr[tab_size] = {"cas","cassette", "ce", "ces","ci","de","des", "don","fas","font","kas" };

void get_word_from_user(int size,Node* root,char* guessed_word  );

void afficherMots(string s,list<string>& l,  Node*  a)
{
    if (a != NULL)
    {
        if (a->data != '\0') 
        {
            if (a->left != NULL) //ajouter caractere a mot
            {
                string t = s + a->data ;
                afficherMots(t,l, a->left);
            }
            if (a->right != NULL) //fait rien et descendre droite
            {
                afficherMots(s,l, a->right);
            }
        }
        else
        {   l.push_back(s);
            cout<<s<<endl; // l'occurence du mot dans le dictionnaire
            //if (a->left != NULL)
              //  afficherMots(s,l, a->left);
        }
    }
}


void traverseNodes(stringstream& ss, string padding, string pointer, Node* node, bool hasRightSibling) {
    if (node != nullptr) {
        ss << "\n" << padding << pointer << node->data;

        string paddingBuilder = padding;
        if (hasRightSibling) {
            paddingBuilder += "│  ";
        } else {
            paddingBuilder += "   ";
        }

        string paddingForBoth = paddingBuilder;
        string pointerRight = "└──";
        string pointerLeft = (node->right != nullptr) ? "├──" : "└──";

        traverseNodes(ss, paddingForBoth, pointerLeft, node->left, node->right != nullptr);
        traverseNodes(ss, paddingForBoth, pointerRight, node->right, false);
    }
}

// Function to print the binary tree
void print(Node* root) {
    stringstream ss;
    traverseNodes(ss, "", "", root, false );
    cout << ss.str();
}


Node* remove_word(Node* root , char* word,int len )
{
    BinaryTree t; 
 if ( root == NULL) 
    return root; 
 
 Node* tmp= root ; 
 Node* test; 
 int j =0; 
 for ( int i = 0 ; i< len ; ++i )
 {
      
     tmp = t.Search(tmp,word[i]); 
	 printf ("%d , %c \n",i,tmp->data);  
	tmp = tmp->left; 
	 
	 //printf ("iil , %c \n",tmp->data);  
	//printf ("tmp- %c \n" , tmp->parent->data); 
	if ( tmp->data == '\0' && i == len-1 ) 
	{
	printf ("tmp- %c \n" , tmp->parent->data); 
		while ( tmp->parent != NULL && j <= len -1  )
		{
			if ( tmp->parent->data != '\0' ) 
			{
			printf ("d %c \n", tmp->data); 
			if ( tmp->right != NULL) 
			{
				if ( tmp->data== '\0') 
				{
					printf("removing /0 \n");  
					test= tmp; 
					tmp->parent->left=tmp->right;	
					j++; 
					tmp = tmp->parent; 
					printf("aa %c \n", tmp->left->data);  
					free(test); 
					test=NULL;
				}
				else
				{
					tmp = tmp->parent; 
				j++;} 
			}else 
			{
				printf ("removing %c \n", tmp->data);
				test= tmp ; 
                tmp = tmp->parent; 
				j++; 
                free(test); 
                test=NULL; 
				tmp->right = NULL; 
			}
			}else {
				printf ("removing %c \n", tmp->data);
				test= tmp ; 
                tmp = tmp->parent; 
				j++;
                free(test); 
                test=NULL; 
				tmp->right = NULL; 
				return root; 	}}	 }}
return root; 
}
int check_user_input(Node* root,char* guessed_word,char user_in, int len, int *arr)
{
    BinaryTree t;
    Node *tmp = root;
    bool flag =false ; 
	int j=0; 
if (root==NULL)
	return j ; 
for ( int i=0;i<len;i++)
{
	tmp = t.Search(tmp,guessed_word[i]);
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
using namespace std;
int main() {
    //const char* inputFilePath = "/home/moktar/Hangman_Game/File_manipulation/dic.txt";
     //const char* outputFilePath = "/home/moktar/Hangman_Game/File_manipulation/result.txt";

    //sortFile(outputFilePath,inputFilePath);
    //readFile(outputFilePath);
/* 
    //test 5edmet mokhtar
    char *arr[3] = { "ces", "ce", "don" };
    char *s = "ci";
    char *s2 = "cas";
    //char *ptrs = s2;



    int j = 0;
    //tree = new BinaryTree();
    //init_BinaryTree(&tree);
    tree.root= tree.insert_word(tree.root, s2, j);
    tree.root = tree.insert_word(tree.root, arr[1], j);
    tree.root = tree.insert_word(tree.root, arr[0], j);
    tree.root = tree.insert_word(tree.root,s, j);
    tree.root = tree.insert_word(tree.root, "de", j);
    tree.root = tree.insert_word(tree.root, "des", j);
    tree.root = tree.insert_word(tree.root,arr[2] , j);

    tree.Inorder(tree.root);
    printf("\n");
    printf ("%c \n" , tree.root->data);
    */
	    BinaryTree tree;
	int j=0; 
    for (int i = 0; i<tab_size;i++)
	{
    tree.root = tree.insert_word(tree.root, arr[i], j);
	}  
   // tree.Inorder(tree.root);
       print(tree.root);

	printf("\n");
   tree.Find_Word(tree.root, arr[5],strlen("de"));	
	//tree.root =  remove_word(tree.root, "cas",strlen("cas"));  

   //tree.root =  remove_word(tree.root, arr[4],strlen(arr[4]));  
    //  tree.root =  remove_word(tree.root, arr[3],strlen(arr[3]));  
   //tree.root =  remove_word(tree.root, arr[2],strlen(arr[2]));  

    printf("\n");
    print(tree.root);
	printf("\n");
	Node* sub = tree.get_sbtree_by_num(tree.root,0);
	list<string> l ; 
    string s ;
	afficherMots(s,l, tree.root);
	cout<<tree.root->data<<endl;
	cout<<"---------------------\n"; 
	for ( string str : l )
	{
		cout <<str<<endl;} 
	
	/*
	tree.root = tree.Find_Word(tree.root, arr[0], strlen(arr[0]));
	printf("-------\n");
    
	tree.root = tree.Find_Word(tree.root, arr[2], strlen(arr[2]));
	printf("-------\n");
    
	tree.root = tree.Find_Word(tree.root,"fon", strlen("font"));
	printf("-------\n");

    printf ("number of subtree, %d \n",tree.get_number_subtree(tree.root)); 

    Node* sub = tree.get_sbtree_by_num(tree.root,0);
	Node* sub1 = tree.get_subtree_by_char(tree.root,'k'); 
	printf ("sub data : %c \n ", sub->data); 

	printf ("sub size : %d \n", tree.sizeTree(sub));
	printf("%c \n",sub1->data);;
    get_word_from_user(strlen(arr[1]), sub,arr[1]);
	printf("-------\n");
	*/
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


void get_word_from_user(int size,Node* root,char* guessed_word )
{
    BinaryTree t;
    printf("guessed word %s \n", guessed_word);
    t.Find_Word(root, guessed_word, size);
	Node* tmp=root;
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
