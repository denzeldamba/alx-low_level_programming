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
	while (n != 98)
	{
		_putchar(n / 100 % 10 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');

		if (n > 98)
			n--;
		else
			n++;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

/**
 * _putchar - Prints a single character to the standard output
 * @c: THe character to be printed
 *
 * Return: On success, the character printed
 *         On error, -1 is returned
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
