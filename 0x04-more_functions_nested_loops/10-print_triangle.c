#include "main.h"

/**
 * print_triangle - a function that prints a line
 *
 *@size: number of '\'s in the line
 *
 * Return: 0 Always success
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(32);
			for (k = 0; k < i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
