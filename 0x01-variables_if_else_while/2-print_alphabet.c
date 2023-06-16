#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Prints all the letters in small case from a-z
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
