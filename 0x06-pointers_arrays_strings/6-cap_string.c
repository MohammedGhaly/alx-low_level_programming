#include "main.h"

/**
 * cap_string - capitalizes the string
 *@str: pointer to the string
 * Return: pointer to the capitalized string.
 */
char *cap_string(char *str)
{
	int shouldCapitalize = 0;
	char *stri = str;

	while (*str != '\0')
	{
		if (shouldCapitalize)
		{
			if (!(*str == ',' || *str == ';' || *str == '.' || *str == '!'
			|| *str == '?' || *str == '\"'
			|| *str == '(' || *str == ')' || *str == '{'
			|| *str == '}' || *str == '\n'
			|| *str == ' ' || *str == '\t'))
			{
				if ((*str <= 90 && *str >= 65) || !(*str <= 122 && *str >= 97))
				{
					shouldCapitalize = 0;
					str++;
					continue;
				}
				*str = (*str - 32);
				shouldCapitalize = 0;
			}
			str++;
			continue;
		}
		if (*str == ',' || *str == ';' || *str == '.' || *str == '!'
		|| *str == '?' || *str == '\"'
		|| *str == '(' || *str == ')' || *str == '{'
		|| *str == '}' || *str == '\n'
		|| *str == ' ' || *str == '\t')
			shouldCapitalize = 1;
		str++;
	}
	return (stri);
}
