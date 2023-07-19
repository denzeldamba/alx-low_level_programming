#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints opcodes of main function
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	void *main_addr = (void *)&main;

	unsigned char *code = (unsigned char *)main_addr;

	for (i = 0; i < n; i++)
	{
		printf("%02x", code[i]);
	}

	printf("\n");

	return (0);
}
