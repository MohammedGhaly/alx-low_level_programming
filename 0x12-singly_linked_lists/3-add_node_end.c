#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head node of the list
 * @str: the string to be added in the new node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *pot;
	size_t str_size;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	str_size = 0;
	for (str_size = 0; str[str_size]; str_size++)
		;

	new->str = strdup(str);
	new->len = str_size;
	new->next = NULL;

	pot = *head;

	if (pot == NULL)
	{
		*head = new;
	} else
	{
		while (pot->next != NULL)
			pot = pot->next;
		pot->next = new;
	}

	return (new);
}
