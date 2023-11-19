#include "main.h"
/**
 * _printf - A function that Prints values based on
 * the specified specifier given by user
 * @format: The format specifier
 * Return: something
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != 'c')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			char c = do_c(format[i]);

			_putchar(c);
			i++;
		}
		else if (format[i + 1] == 's')
		{
			char *str = do_s(format[i]);

			write(1, str, do_s(str));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_end(ap);
	return (count);
}
