all: main.o random.o
	gcc -o random main.c random.c

main.o:
	gcc -c main.c

random.o:
	gcc -c random.c

run:
	./random