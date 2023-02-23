#include "main.h"

/**
 * print_square - a function that prints a square
 *
 *@n: size of the square
 *
 * Return: 0 Always success
 */
void print_square(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
