#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char ch;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		ch = format[i];
		switch (ch)
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
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
