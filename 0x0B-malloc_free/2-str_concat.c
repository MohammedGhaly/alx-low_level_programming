#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - creates an array of chars
 * @s1: string
 * @s2: string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int s1l = 0;
	int s2l = 0;
	int i;
	int j;
	char *newstr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 == NULL)
		s1l = 0;
	else
	{
		while (s1[s1l] != '\0')
			s1l++;
	}

	if (s2 == NULL)
		s2l = 0;
	else
	{
		while (s2[s2l] != '\0')
		s2l++;
	}

	newstr = malloc(sizeof(char) * (s1l + s2l + 1));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < s1l; i++)
		newstr[i] = s1[i];

	for (j = 0; j < s2l; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';
	return (newstr);
}
