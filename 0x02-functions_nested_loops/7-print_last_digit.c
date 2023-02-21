#include "main.h"

/**
 * print_last_digit - checks for lowercase or uppercase character
 *
 *@n: integer number
 *
 * Return: the last digit of the integer Always (Success) 
 */
int print_last_digit(int n)
{
	int r = 0;
	if (n < 0)
	{		
		r = -n % 10;
	}
	else
	{
		r = n % 10;
	}
	_putchar(r + 48);
	return (r);
}
