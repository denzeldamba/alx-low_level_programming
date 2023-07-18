#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: THe number of command_line arguements.
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num_args = count_args(argc);

	_putchar(num_args + '0');
	_putchar('\n');
	return (0);
}

/**
 * count_args - Counts the number of additional arguments passed to the program
 * @argc: The number of command line arguments
 *
 * Return: The number of additional arguments.
 */
int count_args(int argc)
{
	return (argc - 1);
}
