#include "main.h"

/**
 * get_bit - prints a bit at specific index
 * @n: integer
 * @index: integer
 * Return: the bit at index, -1 if there is error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int temp;

	temp = n;
	if(index != 0)
	{
		while (temp && i < index)
		{
			i++;
			temp = temp >> 1;
		}
		if (!temp)
			return (-1);
	}
	return (temp & 1);
}
