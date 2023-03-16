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
	int s1l = 0;
	int i = 0;
	char *dest;

	while (s1[s1l] != '\0')
		s1l++;

	dest = malloc(sizeof(char) * (s1l + n + 1));
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
	else
		dest[i] == '\0';
	return (dest);
}
