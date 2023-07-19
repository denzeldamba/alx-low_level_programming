#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches array for an int using comparator
 * @array: The array to search through
 * @size: Number of elements in array
 * @cmp: Comparator function
 *
 * Return: Index of first match, or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
