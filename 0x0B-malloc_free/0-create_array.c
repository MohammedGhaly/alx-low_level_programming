#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	unsigned int i;
	char *ptr = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
