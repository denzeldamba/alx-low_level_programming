#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_puts(argv[i]);
		_putchar('\n');
	}

	return (0);
}

/**
 * _puts - Prints a string to the standard output (stdout).
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
