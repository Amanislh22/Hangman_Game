#Requirements 
prog_lang: c++ 
interface: GUI 

create a Game called Hang-man 
follow steps provided in pdf 

-> program flow: 
-> oder file in alphbetical order 
-> read file ( contains 100 words min)
-> insert words in file in the tree 
-> mode: 
        -> single player 1  
        -> multi player more than 1 
### single player 1 (practice or puzzels)   
* the player will try to guess the word that belongs to the dictionary that has.
in this mode: the player can choose the diffcuculty  
mode world length  penalty(num of trials) option configurable  
easy  2---4  3
medium 4 8	 3	
very har 12	 3  	

with the selected mode and word length each play the commputer will automatically (randomly) select the word length


## multi player 
obligation: 
name player1 player2 

player1: select word , num of trials 
player2: guess word 

Plenalty: 
num of trials: is exceeded 
score: player 1 will increase if player 2 fialed 
        p)layer 2 will increase if he succeeded 
DB to keep score:

Configuration: 
add a word 
delete a word 
dictionary browser to browse the words (passwd protected for developpers) 

## GUI 
4 interfaces 
HOME - single player - multi player - settings 

# Key functions 

focus single player 

Home - 
settings 
* dict settings 
- add a word  update file 
- delete a word psswd update file  
- search a word psswd 
- view dictionary psswd 
* player settings 
- change difficulty 
single player 
- back end (tree maniultion )  
- GUI 
front end creation of interfaces 
backend user actions 
c 
TODO: 
tree manipulation: 
search (word) :exist or not 
m 
search (char)->return node m   
delete 

qt 
docker 
cmake 
oop + c++ (codebeauty)



