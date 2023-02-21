#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * c - integer number represents ascii of char
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	return (0);
}
