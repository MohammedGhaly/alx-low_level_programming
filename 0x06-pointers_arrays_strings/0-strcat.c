#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *@dest: destination string
 *@srt: source string
 * Return: pointer to the full string.
 */
char *_strcat(char *dest, char *src)
{
	char *Dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src != '\0');
	return (Dest);
}
