output: main.o my_readline.o
	gcc main.o my_readline.o -g3 -fsanitize=address -o my_readline

main.o: main.c
	gcc -c main.c

my_readline.o: my_readline.c my_readline.h
	gcc -c my_readline.c

clean:
	rm *.o my_readline