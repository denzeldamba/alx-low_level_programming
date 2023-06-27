#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n : The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	char comma = ',';
	int i

	if (n <= 98)
	{
		for (i = n; i<= 98; i++)
		{
			if (i == 98)
				comma = '\n';
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(comma);
				_putcahr(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			       comma = '\n';
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			if (i != 98)
			{
				_putchar(comma);
				_putchar(' ');
			}
		}
	}
}
