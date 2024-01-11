CC =gcc 
CFLAGS = -g -Wall
LDFLAGS = -o
main: node.o tree.o main.c DataStructures/BinaryTree.h 
	$(CC) $^ $(CFLAGS) $(LDFLAGS) $@
tree.o: DataStructures/BinaryTree.c	DataStructures/node.h	
	$(CC) -c $< $(CFLAGS) -o  $@
node.o: DataStructures/node.c DataStructures/node.h
	$(CC) -c $< $(CFLAGS) -o $@	
