#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int j = 65;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
        {
                putchar(j);
                j++;
        }
	putchar('\n');
	return (0);
}
