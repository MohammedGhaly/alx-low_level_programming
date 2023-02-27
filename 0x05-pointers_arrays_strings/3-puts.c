#include "main.h"

/**
 * _puts - mimics puts fun of the standard library
 *
 *@s: the pointer of the first of the string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
