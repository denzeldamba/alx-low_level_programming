#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of words, or NULL or failure.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len = 0, num_words = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count number of words */
	for (i = 0; str[i]; i++)
		if (str[i] == ' ' && (i == 0 || str[i - 1] != ' '))
			num_words++;
	/* Allocate memory for array */
	words = malloc((num_words + 1) * sizeof(char *) +
			(i + num_words + 1) * sizeof(char));

	if (words == NULL)
		return (NULL);

	/* Set each position to start of word */
	for (i = 0, k = 0; i < num_words; i++)
	{
		/* Skip spaces */
		while (str[k] == ' ')
		k++;
		/* Get word length */
		for (len = 0; str[k + len] != ' ' && str[k + len]; len++)
		/* Point word position to start of word */
		words[i] = (char *)words + (num_words + 1) *
			sizeof(char *) + k * sizeof(char);
		k += len + 1;
	}

	/* Null terminate array */
	words[i] = NULL;
	/* Copy strings to array */
	for (i = 0; i < num_words; i++)
		for (j = 0; j < len; j++)
			words[i][j] = str[k++];
	return (words);
}
