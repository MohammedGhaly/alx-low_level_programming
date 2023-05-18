#include "lists.h"

/**
 * dlistint_len - calcs the length of a linked list
 * @h: head node
 * Return: number of nodes (integer)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
