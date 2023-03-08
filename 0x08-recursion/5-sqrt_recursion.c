#include "main.h"

/**
 * _sqrt_recursion - calculates the square root of n
 * @n: base integer
 * Return: -1 if n < 0, and the correct result otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (squareRoot(n, 0);
}
/**
 * squareRoot - calculates the square root of a number n
 * @n: integer
 * @i: iteration parameter
 * Return: -1 if no sqrt found, and the correct result otherwise
 */
int squareRoot(int n, int i)
{
	if (i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (squareRoot(n, i + 1));
}
