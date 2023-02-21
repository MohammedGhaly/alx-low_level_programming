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
	if (n < 0)
	{
		int r = 0;
		
		r = ((-n % 10) + 48);
	}
	else
	{
		r = ((n % 10) + 48);
	}
	_putchar(r);
	return (r);
}
