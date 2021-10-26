#include "random.h"

int * generate_random_array(int size) {
    int fp = open("/dev/random", O_RDONLY, 0644);
    int *random_number = malloc(sizeof(int) * size);
    read(fp, random_number, sizeof(int));

    return random_number;
}

void write_random_array(int *array, int size) {
    int fp2 = open("random_numbers.txt", O_WRONLY | O_CREAT, 0644);
    write(fp2, array, sizeof(int));
}

void read_random_array(int *array, int size) {
    int fp3 = open("random_numbers.txt", O_RDONLY, 0644);
    int * random_number2 = malloc(sizeof(int) * size);
    read(fp3, random_number2, sizeof(int));
}

void print_array(int *array, int size) {
    int i;

    for (i = 0; i < size; i++) {
        printf("Random number %d: %d\n", i, array[i]);
    }
}