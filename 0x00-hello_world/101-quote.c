#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific message to the standard error
 *
 * Return: Always 1
 */
int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, mess, strlen(mess));

	return (1);
}
