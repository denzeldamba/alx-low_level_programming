#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : Prints all single digits in decimal system
 *
 * Return : Always 0 (Success)
 */
int main(void)/* main - Entry point */
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
