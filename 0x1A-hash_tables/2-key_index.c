#include "hash_tables.h"

/**
 * key_index - calcs the hashing index of a string key
 * @key: string key
 * @size: size of the hash table
 * Return: the index at which the value of the passed key will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
