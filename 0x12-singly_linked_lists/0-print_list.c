#include "lists.h"

/**
 * print_list - prints the data inside a linked list
 * @h: the head node of the linked list
 * Return: number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	int size;
	list_t *pot;

	pot = malloc(sizeof(list_t));
	size = 0;
	if (h == NULL)
		printf("[%d] %s\n", 0, "(nil)");
	else
	{
		*pot = *h;
		do {
			if (pot->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", (pot->len), (pot->str));
			size++;
			pot = pot->next;
		} while (pot != NULL);

	}
	free(pot);
	return (size);
}
