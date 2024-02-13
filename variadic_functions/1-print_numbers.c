#include "variadic_functions.h"
/**
 * print_numbers - A function adding collection
 * of numbers passed to the program
 * @separator: String printed between two numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		printf(" ");

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(args, const unsigned int);

		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
