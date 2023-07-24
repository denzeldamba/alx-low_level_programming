#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (!isdigit(argv[1][0]) || !isdigit(argv[2][0]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		exit(98);
	}

	_putchar(num1 * num2 + '0');
	_putchar('\n);

	return (0);
}
