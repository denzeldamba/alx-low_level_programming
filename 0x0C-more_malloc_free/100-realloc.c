#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to previously allocated memory block
 * @old_size : Size in bytes of allocated space for ptr.
 * @new_size: New size in bytes for new memory block.
 *
 * Return: Pointer to new memory, NULL if failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);

	free(ptr);

	return (new_ptr);
}
