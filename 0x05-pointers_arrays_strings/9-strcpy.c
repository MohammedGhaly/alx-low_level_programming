#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string
 *@dest: the pointer of the new copy
 *@src: the pointer of the source string
 * Return: A pointer to the new copy.
 */
char *_strcpy(char *dest, char *src)
{
	char *h = dest;

	while (*src != '\0')
	{
		*h = *src;
		h++;
		src++;
	}
	*h = '\0';
	return dest;
}
