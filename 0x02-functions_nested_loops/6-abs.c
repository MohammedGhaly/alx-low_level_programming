#include "main.h"

/**
 * _abs - checks for lowercase or uppercase character
 *
 *@n: integer number
 *
 * Return: n if n is non-negative integer, -n if n is negative integer
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
