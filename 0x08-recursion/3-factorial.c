#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Number that factorial is done
 *
 * Return: The factorial of n, or -1 if  os negative
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
