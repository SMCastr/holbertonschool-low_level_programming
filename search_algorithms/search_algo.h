#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

typedef struct {
    int *arr;
    int size;
} Array;    /* Array struct */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGO_H */