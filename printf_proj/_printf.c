#include "main.h"
/**
 * @format: Format the output data
 * Return: Interger value
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;

	va_list args;
	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		/*Handling simple sentence*/
		if (format[i] != '%')
		{
			putchr(format[i]);
		}

		/*Handling %c*/
		else if (format[i + 1] == 'c')
		{
			putchr(va_arg(args, int));
			i++;
		}

		/*Handling string*/
		else if (format[i + 1] == 's')
		{
			char *s = va_arg(args, char *);

			int x = write(1, s, _strlen(s));
			j += (x - 1);
			i++;
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
			i++;
		}
		j += 1;

	}
	return (j);
}
