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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
