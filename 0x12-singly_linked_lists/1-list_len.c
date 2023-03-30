#include "lists.h"
/**
 * list_len - calculates the size of a linkedlist
 * @h: head of the linkedlist
 * Return: size of the linkedlist
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
