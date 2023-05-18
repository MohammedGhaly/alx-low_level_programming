#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of the list
 * @head: pointer to the head node
 * @n: number inside the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	new->prev = tmp;
	tmp->next = new;
	return (new);
	}
