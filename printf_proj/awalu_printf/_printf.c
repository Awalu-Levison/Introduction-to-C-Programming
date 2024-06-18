#include "main.h"
/**
 * _printf - The custom version of printf()
 * @format: The format specifier
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char str = va_arg(args, int);
				count += _putchar(str);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				count += print_str(str);
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);
				count += print_int(num);
			}
			else
			{
				print_str("unIdentified formater");
				return (-1);
			}
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
