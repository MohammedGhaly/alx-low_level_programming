#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at specific index
 * @head: head node
 * @index: index of the node to be returned
 * Return: the node at (index)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;
	while (i < index && (node != NULL))
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	return (node);
}
