#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

int main(void);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int **allocate_map(int n, int m);

#endif