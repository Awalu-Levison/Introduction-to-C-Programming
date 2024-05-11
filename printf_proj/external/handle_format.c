#include "main.h"
/**
 * handle_format - Handlinmg format given by user
 * @format: The format specifier
 * @mylist: Takes variadic argument list
 * Return: void
 */
int handle_format(const char *format, va_list mylist)
{
	unsigned int i = 0;

	if (*format == 'c')
	{
		i += putchr(va_arg(mylist, int));
	}
	else if (*format == 's')
	{
		i += str_print(va_arg(mylist, char *));
	}
	else if (*format == '%')
	{
		i += putchr('%');
	}
	else if (*format == 'd' || *format == 'i')
	{
		get_int(va_arg(mylist, int));
	}
	return (i);
}
