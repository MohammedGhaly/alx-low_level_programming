#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers passed as arguments
 * @n: number of parameters
 * @separator: string that separates the numbers
 * Return: Success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator != NULL)
	{
		for (i = 1; i < n; i++)
			printf("%d%s", va_arg(ptr, int), separator);
	}
	else
	{
		for (i = 1; i < n; i++)
			printf("%d%s", va_arg(ptr, int), "");
	}
	printf("%d", va_arg(ptr, int));
}
