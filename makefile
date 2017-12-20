CFLAGS = -Wall -g -ansi -O2 -std=c99

bst_main: bst_main.o bst.c bst.h
	$(CC) -o $@ bst_main.o bst.c

c: clean

clean:
	rm -rf bst_main *.o *~ 