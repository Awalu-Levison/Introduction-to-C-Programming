#include "main.h"
/**
 * _printf - Variadic function for customised standard printf function
 * @format: The format specifier
 * Return: Number of strings being printed to STDOUT
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char},
		{"%s", print_str},
		{"%%", print_percent},
		{"%d", print_dec}, {"%i", print_int}, {"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_oct},
		{"%x", print_hex1}, {"%X", print_HEX2},
		{"%S", print_ext_str}, {"%p", print_pointer},
		{"%r", print_rev}, {"%R", print_rot13}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] && format[1] == '\0'))
		return (-1);

myloop:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i += 2;
				goto myloop;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
