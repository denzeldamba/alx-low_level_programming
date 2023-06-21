#include "main.h"

/**
 * print_alphabet_x10 - prints letters 10 times in lower case from a-z
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i<=9; i++)
	{
		letter = 'a';

		while (letter  < = 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
