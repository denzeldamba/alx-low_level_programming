#include <stdio.h>

/**
 * main- prints all the hexadecimal
 *
 * Return-0 (Success)
 */
int main(void)/** main - Entry point */
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);
}
