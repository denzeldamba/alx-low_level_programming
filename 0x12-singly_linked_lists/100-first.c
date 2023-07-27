#include <stdio.h>
#include "lists.h"

/* void print_string(void) __attribute__((constructor)); */

/**
 * print_string - Prints a string main function
 *
 * Return: None
 */
void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * before_main - Function executed before main
 * \brief Prints a string before main is executed.
 *
 * Return: none.
 */
__attribute__((constructor))
void before_main(void)
{
	print_string();
}
