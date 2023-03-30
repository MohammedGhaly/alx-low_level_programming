#include "lists.h"

/**
 * free_list - frees the memory of the list
 * @head: head node of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
