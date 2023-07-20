#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings followed by newline.
 * @separator: String printed between strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(valist, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(valist);
}
