#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the  numbers from 0 to 9.
 *
 * Return: 0 always success.
 */
void print_numbers(void)
{
	int i;

	for (int i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
