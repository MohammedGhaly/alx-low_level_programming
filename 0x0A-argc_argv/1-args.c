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
	argv++;
	printf("%d\n", argc - 1);
	return (0);
}
