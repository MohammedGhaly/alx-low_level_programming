#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range- allocates array in memory
 * @min: minimum integer
 * @max: maximum integer
 * Return: a pointer to the element of the array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
