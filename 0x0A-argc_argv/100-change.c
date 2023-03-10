#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 Success and 1 Faliure
 */
int main(int argc, char *argv[])
{
	if (!(argc == 2))
	{
		printf("%d", argc);
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (minimumMoney(atoi(argv[1]))));
	return (0);
}

/**
 * minimumMoney - calculate the minimum number of coins
 * @n: the amount of money
 * Return: the minimum number of coins
 */
int minimumMoney(int n)
{
	int arr[5] = {25, 10, 5, 2, 1};
	int i = 0;
	int s = n;
	int x;
	int counter = 0;

	while (s != 0)
	{
		x = s % arr[i];
		if (x == 0)
		{
			counter += (s / arr[i]);
			break;
		}
		if (x == s)
		{
			i++;
			continue;
		}
		counter += s / arr[i];
		s = x;
	}
	return (counter);
}
