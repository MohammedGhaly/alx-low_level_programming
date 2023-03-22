#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - (entry point) a program that does simple maths
 * @argc: number of arguments
 * @argv: list of the arguments
 * Return: the result of the simple calculation if there is no error
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*res)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2]);
	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = res(a, b);
	printf("%d\n", result);
	return (0);
}
