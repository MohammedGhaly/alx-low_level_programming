#include "main.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: pointer to the start of the string
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
