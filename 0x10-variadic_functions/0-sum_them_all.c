#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list ptr;

	s = 0;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		s += va_arg(ptr, int);
	return (s);
}
