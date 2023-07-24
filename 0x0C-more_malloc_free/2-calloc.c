#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Aloocates memory for an array of nmemb elements
 * each of size bytes. Intialises to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element (in bytes).
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (ptr);
}
