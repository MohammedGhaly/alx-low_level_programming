#include "main.h"

/**
 * leet - encodes a string to numbers
 *@c: string to be encoded
 * Return: the encoded string.
 */
char *leet(char *c)
	{
	char map[8] = {'o', 'l', 0, 'e', 'a', 0, 0, 't' };
	int i;
	int j;

	for (j = 0; c[j] != '\0'; j++)
	{
		i = 0;

		for (; i < 8; i++)
		{
			if (c[j] == map[i] || c[j] == (map[i] - 32))
			{
				c[j] = i + '0';
				break;
			}
		}
	}
	return (c);
}
