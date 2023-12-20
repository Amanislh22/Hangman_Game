CC =gcc 
CFLAGS = -g -Wall
LDFLAGS = -o
main: main.c 
	$(CC) $< $(CFLAGS) $(LDFLAGS) $@