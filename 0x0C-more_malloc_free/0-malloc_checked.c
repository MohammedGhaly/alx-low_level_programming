#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of bytes to be allocated
 * Return: a pointer to the first byte of the allocatd memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		return (98);
	return (ptr);
}
