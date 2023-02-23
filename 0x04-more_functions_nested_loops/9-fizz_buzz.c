#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
