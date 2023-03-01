#include "main.h"

/**
 * _strncpy - copies the string
 *@dest: destination pointer
 *@src: source pointer
 *@n: number of characters to be copied
 * Return: a pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *Dest = dest;
	char *Src = src;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*Dest = *src;
		Dest++;
		src++;
		i++;
	}

	while (i < n)
	{
		*Dest = '\0';
		Dest++;
		i++;
	}
	return (dest);
}
