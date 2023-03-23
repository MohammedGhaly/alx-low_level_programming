#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - sums all the parameters
 * @n: number of parameters
 * @separator: separates printed strings
 * Return: the sum of the parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *arg;

	va_start(ptr, n);
	if (separator == NULL)
	{
		for (i = 1; i < n; i++)
		{
			arg = va_arg(ptr, char *);
			if (arg == NULL)
				arg = "(nil)";
			printf("%s", arg);
		}
			printf("%s", va_arg(ptr, char *));
	}
	else
	{
		for (i = 1; i < n; i++)
		{
			arg = va_arg(ptr, char *);
			if (arg == NULL)
				arg = "(nil)";
			printf("%s%s", arg, separator);
		}
			printf("%s", va_arg(ptr, char *));
	}
	printf("\n");
}
