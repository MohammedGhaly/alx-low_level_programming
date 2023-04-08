#include "main.h"

/**
 * get_bit - prints a bit at specific index
 * @n: integer
 * @index: integer
 * Return: the bit at index, -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
		return (n & 1);
}
