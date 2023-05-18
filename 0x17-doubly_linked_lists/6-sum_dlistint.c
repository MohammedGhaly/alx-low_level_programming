#include "lists.h"

/**
 * sum_dlistint - sums the nodes of a linked list
 * @head: head node
 * Return: sum of the integers in the list (integer)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
