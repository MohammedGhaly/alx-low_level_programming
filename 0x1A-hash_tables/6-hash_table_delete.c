#include "hash_tables.h"

/**
 * hash_table_delete - frees the hash table
 * @ht: pointer to the hash table
 * Return: Always Success
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *node = NULL;

	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			node = tmp;
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
