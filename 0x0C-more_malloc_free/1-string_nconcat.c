#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: pointer to the new allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1l = 0;
	unsigned int s2l = 0;
	unsigned int i = 0;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1l] != '\0')
		s1l++;

	while (s2[s2l] != '\0')
		s2l++;

	dest = malloc(sizeof(char) * (s1l + minOf(n, s2l) + 1));
	if (dest == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; i < s1l; i++)
			dest[i] = s1[i];
	}

	if (s2 != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (s2[i] == '\0')
				break;

			dest[i + s1l] = s2[i];
		}
		dest[i + s1l] = '\0';
	}
	return (dest);
}
/**
 * minOf - finds the minimum of 2 integers
 * @n: integer 1
 * @s2l: integer 2
 * Return: the minimum integer of n and s2l
 */
int minOf(int n, int s2l)
{
	if (n < s2l)
		return (n);
	else
		return (s2l);
}
