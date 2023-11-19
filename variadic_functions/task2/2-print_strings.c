#include "variadic_functions.h"
/**
 ** print_strings - Printing strings with separators
 ** @n: Number of strings to be printed
 ** @separator: Separating strings
 ** Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
