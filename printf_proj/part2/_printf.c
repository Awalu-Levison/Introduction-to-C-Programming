#include "main.h"
/**
 * _printf - A function that print formated output
 *
 * @format: The format specifier
 * Return: Number of characters printed to sdtout
 */
int _printf(const char *format, ...)
{
	int print_char = 0;

	va_list args;
	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		}

		/*Handle the % sign*/
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				print_char++;
			}

			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				print_char++;
			}

			else if (*format == 's')
			{
				char *mystr = va_arg(args, char *);
				int len_str = write(1, mystr, _strlen(mystr));
				print_char += len_str;
			}
		}
		format++;
	}
	va_end(args);
	return (print_char);
}
