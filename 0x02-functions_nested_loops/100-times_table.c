#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to generate the times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				printf("%d", i * j);
			else
				printf(",%3d", i * j);
		}
		printf("\n");
	}
}
