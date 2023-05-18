#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specific index
 * @h: pointer to the head node
 * @idx: the index of the inserted node
 * @n: the number of the inserted node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *cur = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new->n = n;
	while (i < (idx - 1) && cur != NULL)
	{
		cur = cur->next;
		i++;
	}
	if (cur == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = cur->next;
	cur->next->prev = new;
	cur->next = new;
	new->prev = cur;
	return (new);
}
