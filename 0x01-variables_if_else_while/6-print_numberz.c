#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar('%d', i);
		i++;
	}
	putchar('\n');
	return (0);
}
