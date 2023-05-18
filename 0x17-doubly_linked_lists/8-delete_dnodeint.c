#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specific index
 * @head: pointer to the head node
 * @index: the index of the removed node
 * Return: 1 on Success, otherwise 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int counter;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (!index)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	for (counter = 0; current != NULL && counter < index - 1 ; counter++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);

	if (current->next->next != NULL)
	{
		current->next = current->next->next;
		free(current->next->prev);
		current->next->prev = current;
		return (1);
	}
	else
	{
		free(current->next);
		current->next = NULL;
		return (1);
	}
	return (-1);
}
