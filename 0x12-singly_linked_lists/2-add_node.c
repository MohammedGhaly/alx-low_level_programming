#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of a list
 * @head: pointer to the head of the list
 * @str: the string to be inserted in the new node
 * Return: the address of the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_size;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (str_size = 0; str[str_size]; str_size++)
		;
	new->str = strdup(str);
	new->len = str_size;
	new->next = *head;
	*head = new;

	return (new);
}
