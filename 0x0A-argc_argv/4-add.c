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
	int i, sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
