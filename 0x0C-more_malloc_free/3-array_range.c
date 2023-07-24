#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates array of ints from min to max.
 * @min: Minimum value.
 * @max: Maximum value.
 *
 * Return: Pointer to new array, NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		arr[i] = min;

	return (arr);
}
