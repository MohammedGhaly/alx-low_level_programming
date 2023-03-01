#include "main.h"

/**
 * string_toupper - capitalizes the string
 *@stri: pointer to the string
 * Return: pointer to the reversed string.
 */
char *string_toupper(char *stri)
{
	char *str = stri;

	for (; *str != '\0'; str++)
	{
		if (*str <= 122 && *str >= 97)
		*str = *str - 32;
	}
	return (stri);
}
