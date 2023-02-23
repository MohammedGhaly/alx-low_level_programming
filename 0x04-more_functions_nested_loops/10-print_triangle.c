#include "main.h"

/**
 * print_diagonal - a function that prints a line
 *
 *@size: number of '\'s in the line
 *
 * Return: 0 Always success
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(32);
		for (int k = 0; k < i; k++)
			_putchar(35);
		_putchar('\n');
	}
}
