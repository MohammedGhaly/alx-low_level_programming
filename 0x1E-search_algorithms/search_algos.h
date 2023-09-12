#ifndef SEARCH_H
#define SEARCH_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_rec(int *array, int value, int left, int right);
void print_state(int *array, int left, int right);

#endif /* SEARCH_H */
