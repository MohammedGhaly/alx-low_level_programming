#include "main.h"

/**
 * more_numbers - a function that prints the numbers, from 0 to 14 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(49);
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
