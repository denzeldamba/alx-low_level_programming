#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *program_name = argv[0];

	while (*program_name)
	{
		_putchar(*program_name);
		program_name++;
	}
	_putchar('\n');

	return (0);
}
