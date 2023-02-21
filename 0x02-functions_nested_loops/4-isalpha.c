#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase character
 *
 *@c: integer number represents ascii of char
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	return (0);
}
