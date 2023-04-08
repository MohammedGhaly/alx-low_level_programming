#include "main.h"

/**
 * get_bit - prints a bit at specific index
 * @n: integer
 * @index: integer
 * Return: the bit at index, -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index < 0)
		return (-1);
	if (index != 0)
	{
		while (n && i < index)
		{
			i++;
			n = n >> 1;
		}
		if (!n)
			return (-1);
	}
	return (n & 1);
}
