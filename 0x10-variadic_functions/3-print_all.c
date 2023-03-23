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
	int i;
	int first;

	va_start(ptr, format);
	i = 0;
	first = 1;

	while (format[i] != '\0')
	{
		if (!first)
			printf(", ");
		first = 0;
		switch (format[i])
		{
			case 'c' : 
				printf("%c", va_arg(ptr, int));
				break;
			
			case 'i' : 
				printf("%d", va_arg(ptr, int));
				break;
			
			case 'f' :
				printf("%f", va_arg(ptr, double));
				break;
			
			case 's' :
				printf("%s", va_arg(ptr, char *));
				break;
			
			default:
			first = 1;
				break;
		}
		i++;
	}
	printf("\n");
}
