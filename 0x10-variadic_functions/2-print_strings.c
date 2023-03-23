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


	if (n < 1)
	{
		printf("\n");
		return;
	}
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
		arg = va_arg(ptr, char *);
		if (arg == NULL)
			arg = "(nil)";
		printf("%s", arg);
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
		arg = va_arg(ptr, char *);
		if (arg == NULL)
			arg = "(nil)";
		printf("%s", arg);
	}
	printf("\n");
}
