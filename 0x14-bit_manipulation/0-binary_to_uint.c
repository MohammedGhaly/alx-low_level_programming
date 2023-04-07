#include "main.h"

/**
 * binary_to_uint - converts string of 0's and 1's to unsigned integer
 * @b: string
 * Return: 0 for errors otherwise, integer
 */
unsigned int binary_to_uint(const char *b)
{
	int len, index;
	unsigned int number, stage;

	if (!b || !b[0])
		return (0);

	number = 0;
	len = 0;

	while (b[len])
	{
		if (!(b[len] == '0' || b[len] == '1'))
			return (0);
		len++;
	}
	index = len - 1;
	stage = 1;
	while (index > -1)
	{
		if (b[index] == '1')
			number += stage;
		stage *= 2;
		index--;
	}
	return (number);
}
