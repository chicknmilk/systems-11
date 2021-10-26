#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>



int main() {
    // opens /dev/random and reads a random number
    int fp = open("/dev/random", O_RDONLY, 40);
    int random_number[10];
    read(fp, random_number, sizeof(int));

    // prints the random numbers
    printf("Printing Generated Numbers:\n");
    int i;
    for (i = 0; i < 10; i++) {
        printf("Random number %d: %d\n", i + 1, random_number[i]);
    }

    // writes the random numbers to a file
    int fp2 = open("random_numbers.txt", O_WRONLY | O_CREAT, 40);
    write(fp2, random_number, sizeof(int));

    // reads the random numbers from the file and places it in an array
    int fp3 = open("random_numbers.txt", O_RDONLY, 40);
    int random_number2[10];
    read(fp3, random_number2, sizeof(int));

    // prints the random numbers from the file
    printf("\nPrinting Numbers From File\n");
    for (i = 0; i < 10; i++) {
        printf("Random number %d: %d\n", i + 1, random_number2[i]);
    }



    return 0;

}