#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if the letter is a digit or not.
 *
 *@c: the char to be tested
 *
 * Return: 1 if digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
