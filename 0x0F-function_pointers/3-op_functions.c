#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets the difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividess two integers
 * @a: first integer
 * @b: second integer
 * Return: if b is not 0 the division of a / b, otherwise error
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - the result is a % b
 * @a: first integer
 * @b: second integer
 * Return: if b is not 0 a % b, otherwise error
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
