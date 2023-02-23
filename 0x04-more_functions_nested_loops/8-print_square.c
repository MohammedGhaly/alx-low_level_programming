#include "main.h"

/**
 * print_square - a function that prints a square
 *
 *@size: size of the square
 *
 * Return: 0 Always success
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
