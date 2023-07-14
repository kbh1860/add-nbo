all: add-nbo

add-nbo: main.o
		gcc -o add-nbo add-nbo.o

main.o: main.c
		gcc -c -o add-nbo.o main.c

clean:
		rm -f add-nbo
		rm -f *.o
