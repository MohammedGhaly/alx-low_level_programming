#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int i = 0;

	while (i <= 8)
	{
		_putchar(arr[i]);
		i++;
	}
	return (0);
}
