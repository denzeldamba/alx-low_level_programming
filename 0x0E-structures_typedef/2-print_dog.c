#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print a struct dog
 * @d: The dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name != NULL ? printf("%s\n", d->name) : printf("(nil)\n");

		printf("Age: ");
		printf("%f\n", d->age);

		printf("Owner: ");
		d->owner != NULL ? printf("%s\n", d->owner) : printf("(nil)\n");
	}
}
