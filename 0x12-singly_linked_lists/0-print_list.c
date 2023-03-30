#include "lists.h"

/**
 * print_list - prints the data inside a linked list
 * @h: the head node of the linked list
 * Return: number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
