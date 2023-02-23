#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14 10 times
 *
 * Return: 0 always success
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(49);
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
