#include "main.h"

/**
 * print_line - a function that prints a line
 *
 * Return: 0 Always success
 */
void print_line(int n)
{
	int i = n;

	for (i = 0; i < n; i++)
		_putchar(95);
	_putchar('\n');
}
