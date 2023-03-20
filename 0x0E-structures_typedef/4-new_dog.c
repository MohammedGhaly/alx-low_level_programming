#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog (string)
 * @age: age of the dog (int)
 * @owner: owner of the dog (string)
 * Return: Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *copy_name, *copy_owner;
	unsigned int x, name_len = 0, owner_len = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (x = 0; name[x] != '\0'; x++)
		name_len++;

	for (x = 0; owner[x] != '\0'; x++)
		owner_len++;

	copy_name = malloc(sizeof(char) * (name_len + 1));
	if (copy_name == NULL)
	{
		free(new_name);
		return (NULL);
	}

	copy_owner = malloc(sizeof(char) * (owner_len + 1));
	if (copy_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	for (x = 0; x <= name_len; x++)
		copy_name[x] = name[x];

	for (x = 0; x <= owner_len; x++)
		copy_owner[x] = owner[x];

	new_name->name = copy_name;
	new_name->owner = copy_owner;
	new_name->age = age;
	return (new_name);
}
