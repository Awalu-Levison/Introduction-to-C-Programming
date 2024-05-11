#include "main.h"

/**
 * @format: Format the output data
 * Return: Interger value
 */
int _printf(const char *format, ...)
{
	unsigned int i, j = 0;

	va_list args;
	va_start(args, format);

	if (format == NULL || *format == '\0')
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
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
			char *mystr = va_arg(args, char *);

			int x = str_print(mystr);
			i++;
			j += (x - 1);
		}
		else if (format[i + 1] == '%')
		{
			putchr('%');
			i++;
		}
		else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
		{
			putchr((va_arg(args, int) + '0'));
			i++;
		}
		j += 1;

	}
	return (j);
}
