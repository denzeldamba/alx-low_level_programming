#include "main.h"

/**
 * reset_to_98- Updates the value pointed to by n to 98
 * @n: Pointer to the integer to be updates.
 */
void reset_to_98(int *n)
{
	*n = 98;
	int value = *n;

	if (value == 0)
	{
		_putchar('0');
		return;
	}

	while (value != 0)
	{
		int remainder = value % 16;
		char hexChar;

		if (remainder < 10)
			hexChar = remainder + '0';
		else
			hexChar = remainder - 10 + 'a';

		_putchar(hexChar);
		value /= 16;
	}
}
