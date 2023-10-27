#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
