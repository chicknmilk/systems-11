#include "random.h"

int main() {
    int size = 10;
    int * arr = generate_random_array(size);

    printf("Printing random array:\n");
    print_array(arr, size);

    write_random_array(arr, size);
    read_random_array(arr, size);

    printf("Printing read random array\n");
    print_array(arr, size);

    return 0;
}