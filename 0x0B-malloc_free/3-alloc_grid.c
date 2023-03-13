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
		bigArray[i] = malloc(width * sizeof(int));
		if (bigArray == NULL)
		{
			free(bigArray);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			bigArray[i][j] = 0;
		}
	}
	return (bigArray);
}
