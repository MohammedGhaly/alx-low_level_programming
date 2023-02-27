#include "main.h"

/**
 * _strlen - check the code
 *
 *@s: the pointer of the first char of the string
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
