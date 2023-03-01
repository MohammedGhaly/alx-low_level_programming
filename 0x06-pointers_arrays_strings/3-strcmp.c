#include "main.h"

/**
 * _strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 * Return:1 or 0 or -1.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			continue;
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		else
			return (-1);
	}
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (0);
		else
			return (-1);
	}
	return (1);
}
