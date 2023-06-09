#include "hash_tables.h"

/**
 * hash_table_set - adds a value to the hash table
 * @ht: pointer to the hash table
 * @key: string key
 * @value: string value
 * Return: 1 on Success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *node;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (!(node->key) || !(node->value))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

