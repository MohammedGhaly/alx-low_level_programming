#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -entry point
 *@argc: number of arguments of the program
 *@argv: list of arguments of the program
 * Return: 0 Always Success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc < 1)
		return (0);
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
