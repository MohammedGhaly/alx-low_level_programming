#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: format of parameters
 * Return: Success
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, first;
	char *strarg;

	va_start(ptr, format);
	i = 0;
	first = 1;

	while (format && format[i])
	{
		if (!first)
			printf(", ");
		first = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				strarg = va_arg(ptr, char *);
				if (strarg == NULL)
				{
					printf("%s", "(nil)");
					break;
				}
				printf("%s", strarg);
				break;
			default:
			first = 1;
				break;
		}
		i++;
	}
	printf("\n");
}
