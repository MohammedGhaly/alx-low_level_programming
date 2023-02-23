#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the  numbers from 0 to 9.
 *
 * Return: 0 always success.
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
