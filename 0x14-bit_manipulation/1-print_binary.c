#include "main.h"

/**
 * print_binary - prints the passed number in binary (ones and zeros)
 * @n: integer
 * Return: Always Success 0
 */
void print_binary(unsigned long int n)
{

	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
