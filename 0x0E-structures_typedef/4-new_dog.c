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
	dog_t dooog;
	dog_t *d = &dooog;
	char *new_name;
	char *new_owner;
	int name_len = 0, owner_len = 0, i, j;

	if (name == NULL || age <= 0 || owner == NULL)
	{
		free(d);
		return (NULL);
	}
	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	new_name = malloc(name_len + 1);
	if (new_name == NULL)
		return (NULL);
	new_owner = malloc(owner_len + 1);
	if (new_owner == NULL)
		return (NULL);
	for (i = 0; i <= name_len; i++)
		new_name[i] = name[i];

	for (j = 0; j <= name_len; j++)
		new_name[j] = name[j];

	d->age = age;
	d->name = new_name;
	d->owner = new_owner;
	return (d);
}
