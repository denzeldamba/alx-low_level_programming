#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * Numbers range from 0 to 99 and are printed with two digits
 * Numbers are separated by a space and combinations are separated by comma and space
 * Combinations are printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
		putchar('0' + (i / 10));
		putchar('0' + (i % 10));

		putchar(' ');

		putchar('0' + (j / 10));
 		putchar('0' + (j % 10));

			if (i != 99 || j != 99)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

