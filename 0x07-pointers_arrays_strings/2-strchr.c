#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointed string
 * @c: char to be found
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
