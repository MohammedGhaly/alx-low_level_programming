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
	hash_node_t *tmp;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = tmp;

	if (!(node->key) || !(node->value))
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
