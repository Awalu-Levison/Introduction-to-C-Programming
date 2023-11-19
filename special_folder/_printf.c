#include "main.h"
#include <stdarg.h>
/**
 * _printf - A function that Prints values based on
 * the specified specifier given by user
 * @format: The format specifier
 * Return: something
 */
int _printf(const char *format, ...)
{
	unsigned int i, count  = 0;
	va_list ap;

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		else if (format[i + 1] == 's')
		{
			do_s(va_arg(ap, char *));
			write(1, str, do_s(str));
			count++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		else
		{
			write(1, format, format[i]);
		}
	}

	va_end(ap);

	return (count);
}
