#include "main.h"
/**
 * _printf - A function that Prints values based on
 * the specified specifier given by user
 * @format: The format specifier
 * Return: something
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				i++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(ap, int);

				write(1, &c, 1);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char *);

				write(1, str, strlen(str));
				i = (atoi)(i + strlen);
			}
		}
	}
	va_end(ap);
	return (i);
}
