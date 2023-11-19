#include "variadic_functions.h"
/**
 * print_all - Print something
 * @format: The format specifier
 * Return: Specified string
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *str;
	va_list ap;

	va_start(ap, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 0;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				j = 1;
				break;
		}
		if (format[i] != '\0' && j != 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
