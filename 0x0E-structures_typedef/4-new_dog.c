#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL && name[0] != '\0')
	{
		d->name = strdup(name);
	}
	else
	{
		d->name = name;
	}
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;
	if (owner[0] != '\0' && owner != NULL)
	{
		d->owner = strdup(owner);
	}
	else
	{
		d->owner = owner;
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
