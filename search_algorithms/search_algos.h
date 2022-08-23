#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int *array, size_t beg, size_t final);
int jump_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS_H*/
