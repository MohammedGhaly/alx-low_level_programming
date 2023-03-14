#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees allocated memory
 * @grid: 2D Array
 * @height: height of the array
 * Return: Always Success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
