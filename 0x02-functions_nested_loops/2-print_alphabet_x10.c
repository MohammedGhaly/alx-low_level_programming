#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
        }
	_putchar('\n');
	j++;
	}
}
