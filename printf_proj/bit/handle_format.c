#include "main.h"
/**
 * handle_format - Dealing with the specifier
 * given by the user
 * @format: Specifier given by user
 * @mylist: Variable number of arguments
 * passed to the function
 * Return: Number of characters printed
 */
int handle_format(char format, va_list mylist)
{
	unsigned int i = 0;

	if (format == 'c')
		i += char_print(va_arg(mylist, int));
	else if (format == 's')
		i += string_print(va_arg(mylist, char *));
	else if (format == 'd')
		i += digit_print((long)va_arg(mylist, int), 10);
	else if (format == 'x')
		i += digit_print((long)va_arg(mylist, unsigned int), 16);
	else
		i += write(1, &format, 1);
	return (i);
}
