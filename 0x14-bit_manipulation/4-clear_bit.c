#include "main.h"

/**
 * clear_bit - sets the bit at index to 0
 * @n: integer
 * @index: integer
 * Return: 1 for Success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *temp;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	temp = malloc(sizeof(unsigned long int));
	*temp = *n;
	if (*temp & (1 << index))
		*n = *temp - twoPowerOf(index);
	return (1);
}
/**
 * twoPowerOf - calculates 2 power of p
 * @p: integer
 * Return: the result of 2 power of p
 */
unsigned long int twoPowerOf(int p)
{
	unsigned long int res = 1;

	if (p != 0)
	{
		for (; p > 0; p--)
			res = res * 2;
	}
	return (res);
}
