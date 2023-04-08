#include "main.h"

/**
 * flip_bits - calculates number of different bits
 * @n: integer
 * @m: integer
 * Return: number of different binary bits between n & m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipCounter = 0, i = 0;

	for (; i < 64; i++)
	{
		if ((n & 1) ^ (m & 1))
			flipCounter++;
		n >>= 1;
		m >>= 1;
	}
	return (flipCounter);
}
