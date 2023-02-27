#include "main.h"

/**
 * puts_half - prints char and not its neighbours
 *
 *@str: pointer of the first char
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	char *s = str;
	int x = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	if (len % 2 == 0)
		x = len / 2;
	else
		x = (len / 2) + 1;
	for (i = 1; i <= x ; i++)
		str++;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
