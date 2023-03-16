#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: number of bytes to be allocated
 * @size: integer
 * Return: a pointer to the first byte of the allocatd memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	
	for (i = 0; i < size * nmemb; i++)
		arr[i] = 0;
	return (arr);
}
