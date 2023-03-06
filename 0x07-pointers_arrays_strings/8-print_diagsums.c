#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input array
 * @size: size of the matrix
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < size; i++)
		sum += a[i * size + i];
	printf("%d, ",sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i * size + (size - i - 1)];
	printf("%d\n",sum);
}
