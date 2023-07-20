#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (j > 1)
			break;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
		}

		i++;

		if (format[i] == '\0')
			j++;
	}

	printf("\n");
	va_end(args);
}
