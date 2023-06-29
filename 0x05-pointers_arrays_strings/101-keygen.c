#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description- Generates random passwords
 *
 * Return: 0 (Success)
 */

int main(void)
{
	const int password_length = 10;
	const char characters[] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char password[password_length + 1];

	srand(time(NULL));

	for (int i = 0; i < password_length; i++)
	{
		int random_index = rand() % (sizeof(characters) - 1);
		password[i] = characters[random_index];
	}

	password[password_length] = '\0';

	return (0);
}
