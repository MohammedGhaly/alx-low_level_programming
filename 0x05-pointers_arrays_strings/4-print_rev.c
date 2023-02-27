#include "main.h"

/**
 * print_rev - prints a string reversed
 *
 *@s: the pointer of the first char of the string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *t = s;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	while (*s != '\0')
	{
		s++;
	}
		s--;
	while (s != t)
	{
		_putchar(*s);
		s--;
	}
	_putchar(*s);
	_putchar('\n');
}
