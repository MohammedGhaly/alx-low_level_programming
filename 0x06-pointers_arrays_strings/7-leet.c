#include "main.h"

/**
 * leet - encodes a string to numbers
 *@c: string to be encoded
 * Return: the encoded string.
 */
char *leet(char *c)
{
	char *C = c;

	for (; *c != '\0'; c++)
	{
		if (*c == 'a' || *c == 'A')
		{
			*c = '4';
			continue;
		}
		if (*c == 'e' || *c == 'E')
		{
			*c = '3';
			continue;
		}
		if (*c == 'o' || *c == 'O')
		{
			*c = '0';
			continue;
		}
		if (*c == 't' || *c == 'T')
		{
			*c = '7';
			continue;
		}
		if (*c == 'l' || *c == 'L')
		{
			*c = '1';
			continue;
		}
	}
	return (C);
}
