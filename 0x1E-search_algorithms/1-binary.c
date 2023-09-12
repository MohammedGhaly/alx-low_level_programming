#include "search_algos.h"

/**
 * binary_search - searches for an element in O (log n) time complexity
 * @array: pointer to the first element of the array
 * @size: number of elements of the array
 * @value: value of the element to be searched for
 * Return: if found: index of the element, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    if (size == 1)
    {
        printf("Searching in array: %d", array[0]);
        return (0);
    }
    return binary_search_rec(array, value, 0, size - 1);
}

/**
 * binary_search_rec - searches the subarray for the value and divides it
 * @array: pointer to the first element of the array
 * @value: value of the element to be searched for
 * @left: index of the leftmost element of the current subarray
 * @right: index of the rightmost element of the current subarray
 * Return: if found: index of the element, -1 otherwise
 */
int binary_search_rec(int *array, int value, int left, int right)
{
    int mid;

    print_state(array, left, right);

    mid = (right + left) / 2;
    if (array[mid] == value)
        return (mid);
    if (left >= right)
        return (-1); 
    if (array[mid] < value)
        return binary_search_rec(array, value, mid + 1, right);
    return binary_search_rec(array, value, left, mid - 1);

}

/**
 * print_state - prints the current array searched
 * @array: pointer to the first element of the array
 * @left: index of the leftmost element of the current subarray
 * @right: index of the rightmost element of the current subarray
 * Return: if found: index of the element, -1 otherwise
 */
void print_state(int *array, int left, int right)
{
    int i;

    if (left <= right)
    {
        printf("Searching in array: ");
        for (i = 0; left + i < right; i++)
            printf("%d, ", array[left + i]);
        printf("%d\n", array[right]);
    }
}
