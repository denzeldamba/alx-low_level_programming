#include <stdio.h>
#define COUNT 50
/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int fib[COUNT];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < COUNT; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	for (i = 0; i < COUNT - 1; i++)
		printf("%d, ", fib[i]);

	printf("%d\n", fib[COUNT - 1]);

	return (0);
}
