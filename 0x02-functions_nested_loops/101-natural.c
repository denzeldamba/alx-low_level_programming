#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Computes and prints the sum of all mutiples 3 or 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int limit = 1024;
	int multiples_sum = 0;

	for (int num = 0; num < limit; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			multiples_sum += num;
	}
	printf("%d\n", multiples_sum);

	return (0);

}	
