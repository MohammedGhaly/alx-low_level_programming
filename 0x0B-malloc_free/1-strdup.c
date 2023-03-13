#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - creates an array of chars
 * @str: the string that will be copies
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int i = 0;
	int strcounter = 0;
	char *newstr;

	if (str == NULL)
		return (NULL);

	while (str[strcounter] != '\0')
		strcounter++;

	newstr = malloc(sizeof(char) * (strcounter));

	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';

	if (newstr == NULL)
		return (NULL);

	return newstr;
}
