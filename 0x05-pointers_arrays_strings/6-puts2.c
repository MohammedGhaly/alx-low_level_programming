#include "main.h"

/**
 * puts2 - prints char and not its neighbours
 *
 *@s: pointer of the first char
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (!(i % 2))

			_putchar(*str);
		i++;
		str++;
	}
	_putschar('\n');
}
