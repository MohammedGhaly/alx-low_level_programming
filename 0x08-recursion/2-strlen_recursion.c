#include "main.h"

/**
 * _strlen_recursion - prints the length of a string with recursion
 * @s: pointer to the start of the string
 * Return: Always 0 (Success)
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
