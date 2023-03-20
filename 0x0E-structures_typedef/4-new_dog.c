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

	d->age = age;
	d->name = name;
	d->owner = owner;
	return (d);
}
