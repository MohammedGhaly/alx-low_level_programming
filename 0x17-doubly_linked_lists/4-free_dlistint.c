#include "lists.h"

/**
 * free_dlistint - frees linked list
 * @head: head node
 * Return: Success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nxt;
	dlistint_t *current;

	current = head;
	if (current == NULL)
		return;
	if (current->next == NULL)
	{
		free(current);
		return;
	}
	nxt = current->next;
	while (nxt != NULL)
	{
		free(current);
		current = nxt;
		nxt = nxt->next;
	}
	free(current);
}
