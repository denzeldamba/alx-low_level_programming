#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers, separated by comma and space
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 50;
	int fib{count};
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < count; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	for (i = 0; i < count - 1; i++)
		printf("%d, ", fib[i]);

	printf("%d\n", fib[count - 1]);

	return (0);
}
