#include "main.h"

/**
 * _strncat - check the code
 *@dest: destination pointer
 *@src: source pointer
 *@n: number of characters to be concatenated
 * Return: a pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *Dest = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (Dest);
}
