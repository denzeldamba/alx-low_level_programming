#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits
 * Numbers must be separated by ', ' and printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
		putchar('0' + i);
		putchar('0' + j);

		if (i != 8 || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

