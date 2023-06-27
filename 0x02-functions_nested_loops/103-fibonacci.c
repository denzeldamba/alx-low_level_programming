#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the Fibonacci numbers less than 4000000
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 4000000;
	int term1 = 1, term2 = 2;
	int sum = 0;

	while (term1 <= limit)
	{
		if (term1 % 2 == 0)
			sum += term1;

		int nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}

	printf("%d\n", sum)

	return (0);
}
