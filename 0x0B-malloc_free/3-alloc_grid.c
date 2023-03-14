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
	int **array;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	return (clearAll(array, height, 1));

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
			return (clearAll(array, height, 0));
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
/**
 * clearAll - frees allocated memory
 * @grid: 2D Array
 * @height: height of the array
 * @flag: 0 or 1
 * Return: Always NULL
 */
int **clearAll(int **grid, int height, int flag)
{
	int i;

	if (flag)
		free(grid);
	else
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	return (NULL);
}
