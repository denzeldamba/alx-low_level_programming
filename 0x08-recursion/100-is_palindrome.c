#include "main.h"

int str_length(char *s);
int is _palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is _palindrome(char *s)
{
	int length = str_length(s);
	return (is_palindrome_helper(s, 0, length - 1));
}
/**
 * str_length - Calculares the length of string recursively
 * @s: The string to calculate the length of 
 *
 * Return: The length of the string 
 */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_length(s + 1));
	}
}

/**
 * is_palindome_helper - helper function to check if a string is a palindrome
 * @s: The string to check
 * @start: THe starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome , 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1)
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
