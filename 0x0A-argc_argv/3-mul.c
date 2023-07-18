#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing th command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{

	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		print_error();
		return (1);
	}

	num1 = atoi_custom(argv[1]);
	num2 = atoi_custom(argv[2]);
	result = num1 * num2;

	print_number(result);
	print_newline();
	return (0);
}

/**
 * print_error - Prints an error message to stdout.
 */
void print_error(void)
{
	char *error_msg = "Error";
	char *c = error_msg;

	while (*c)
	{
		_putchar(*c);
		c++;
	}
}

/**
 * atoi_custom - Converts a string to an integer.
 * @str: The string to be converted.
 *
 * Return: The converted integer.
 */
int atoi_custom(char *str)
{
	int sign = 1;
	int result = 0;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (sign * result);
}

/**
 * print_number - Prints an integer to stdout.
 * @num: The integer to be printed.
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar(num % 10 + '0');
}

/**
* print_newline - Prints a newline character to stdout.
*/
void print_newline(void)
{
	_putchar('\n');
}
