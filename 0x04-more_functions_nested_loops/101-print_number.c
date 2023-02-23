#include "main.h"

/**
 * print_number - a function that prints a line
 *
 *@n: number to be printed
 *
 * Return: 0 Always success
 */
void print_number(int n)
{
	int n2;
	int i;
	int d = 1000000000;
	int temp;
	int x;
	int allBeforeZeros = 1;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	if (n < 0)
	{
		n2 = -n;
		_putchar(45);
	}
	else
		n2 = n;

	for (i = 0; i < 10; i++)
	{
		temp = n2;
		n2 = n2 % d;
		x = '0' + (temp - n2) / d;
		if (x == 48)
		{
			if (!allBeforeZeros)
				_putchar(x);
		}
		else
		{
			allBeforeZeros = 0;
			_putchar(x);
		}
		d = d / 10;
	}
	_putchar('\n');
}
