#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of the command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argc[])
{
	int sum = 0;
	int i;
	int num;

	if (argc == 1)
	{
		print_number(0);
		print_newline();
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			print_error();
			return (1);
		}

		num = atoi_custom(argv[i]);
		sum += num;
	}

	print_number(sum);
	print_newline();
	return (0);
}

/**
 * is_positive_number - Checks if a string contains a positive number.
 * @str: The string to be checked.
 *
 * Return: 1 if the string contains a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * atoi_custom - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The converted integer.
 */
int atoi_custom(char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result);
}

/**
 *print_error - Prints an error message to stdout
 */
void print_error(void)
{
	_putchar('\n');
}
