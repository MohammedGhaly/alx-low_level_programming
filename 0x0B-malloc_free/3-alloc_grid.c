#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates an grid of zeros
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the array of arrays
 */
int **alloc_grid(int width, int height)
{
	int **bigArray;
	int *smallArray;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	bigArray = malloc(height * sizeof(int));
	if (bigArray == NULL)
	{
		free(bigArray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		smallArray = malloc(width * sizeof(int));
		if (smallArray == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			smallArray[j] = 0;
		bigArray[i] = smallArray;
	}
	return (bigArray);
}
