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
	int **iarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int) * height);

	if (iarray == NULL)
	{
		free(iarray);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);
		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			iarray[i][n] = 0;
		}
	}
	return (iarray);
}
