all: main.o
	gcc -o random main.c

main.o:
	gcc -c main.c

run:
	./random