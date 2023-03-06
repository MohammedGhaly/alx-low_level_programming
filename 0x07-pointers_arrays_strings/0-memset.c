#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 *@s: pointer to the first char
 *@b: the character that fills the memory
 *@n: the number of bytes to be filled with b
 * Return: pointer to the same place in memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
