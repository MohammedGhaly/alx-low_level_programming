#include "main.h"

/**
 * _pow_recursion - calculates the x power of y with recursion
 * @x: base integer
 * @y: power integer
 * Return: -1 if y < 0, and the correct result otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
