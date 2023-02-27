include "main.h"

/**
 * swap_int - check the code
 *
 * @a: address of the first integer
 *
 * @b: address of the second integer
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
