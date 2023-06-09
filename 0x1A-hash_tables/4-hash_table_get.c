#include "hash_tables.h"

/**
 * hash_table_get - gets a value from the hash table
 * @ht: pointer to the hash table
 * @key: string key
 * Return: string value if found the associated key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key || *key == '\0')
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
