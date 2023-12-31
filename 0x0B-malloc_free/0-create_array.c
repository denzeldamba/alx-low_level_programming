#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and intialises it with a char
 * @size: The size of the array to create
 * @c: The specific char to initalise the array with
 *
 * Return: On success, retuns a pointer to the created arrat.
 * On failure, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
