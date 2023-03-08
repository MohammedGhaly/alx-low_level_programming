#include "main.h"

/**
 * _print_rev_recursion - prints an inverted string with recursion
 * @s: pointer to the start of the string
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
