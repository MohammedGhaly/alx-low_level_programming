#include "search_algos.h"

/**
 * linear_search - searches for an element linearly (checks every element)
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the value to be searched for
 * Return: if element found: element index, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
		return (-1);
}
