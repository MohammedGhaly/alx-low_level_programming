#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (haystack[i] != '\0')
	{
		int j = 0;
		int k = i

		while (neddle[j] != '\0')
		{
			if (haystack[k] == needle[j])
			{
				j++;
				k++;
				continue;
			} else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);

		i++;
	}
	return (NULL);
}
