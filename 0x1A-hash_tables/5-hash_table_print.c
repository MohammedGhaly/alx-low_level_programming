#include "hash_tables.h"

/**
 * hash_table_print - prints all key/value pairs in a hash table
 * @ht: pointer to the hash table
 * Return: Always Success
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
	int first = 1;

	if (!ht)
		return;

	printf("{");

	for (; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (first)
			{
				printf("\'%s\': \'%s\'", node->key, node->value);
				first = 0;
			}
			else
				printf(", \'%s\': \'%s\'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
