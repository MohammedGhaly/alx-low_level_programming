#include "main.h"

/**
 * rev_string - reverses the string
 *
 *@s: the pointer of the first char
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len = 0;
	char *t = s;
	int i;

	while (*t != '\0')
	{
		len++;
		t++;
	}

	for (i = 0; i < (len / 2); i++)
	{
		char c = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = c;
	}
}
