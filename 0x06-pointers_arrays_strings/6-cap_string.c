#include "main.h"

/**
 * cap_string - Capitalizes all word of a string.
 * @str: THe string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0, j = 0;
	char separators[] =" \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		for (; j < 12; j++)
		{
			if (str[i] = separators[j])
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
			}
		}
		i++;
	}

	return (str);
}
