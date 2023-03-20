#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the empty fields of the struct dog
 * @d: pointer to the struct
 * @name: name string
 * @age: the age of the dog
 * @owner: owner name string
 * Return: Success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	d->age = age;
	d->name = name;
	d->owner = owner;
}
