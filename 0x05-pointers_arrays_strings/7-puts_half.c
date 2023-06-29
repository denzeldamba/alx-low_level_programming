#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	return (length);
}

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index;

	if (length % 2 == 0)
		start_index = length / 2;
	else 
		start_index = (length - 1) / 2;

	while (*(str + start_index) != '\0')
	{
		_putchar(*(str + start_index));
		start_index++;
	}

	_putchar('\n');
}
