#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name according to the function passed
 * @name: name string
 * @f: pointer to a function
 * Return: Success Always
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
