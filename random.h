#ifndef RANDOM_H
#define RANDOM_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int * generate_random_array(int size);
void write_random_array(int *array, int size);
void read_random_array(int *array, int size);
void print_array(int *array, int size);

#endif