#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specific index
 * @head: pointer to the head node
 * @index: the index of the removed node
 * Return: 1 on Success, otherwise 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if (*head == NULL)
			return (0);
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (-1);

	tmp = node->prev;
	if (node->next != NULL)
	{
		tmp->next = node->next;
		node->next->prev = tmp;
	}
	else
		tmp->next = NULL;
	free(node);
	return (1);
}
