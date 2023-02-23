#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if the letter is uppercase or not.
 *@c: the char to be tested
 * Return: 1 if upercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c<= 90)
		return (1);
	else
		return (0);
}
