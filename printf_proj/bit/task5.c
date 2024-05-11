#include "main.h"
/**
 * print_ext_str - Print customised string format
 * @val: Variadic type of arguments
 * Return: Number of characters printed
 */
int print_ext_str(va_list val)
{
	int i, len = 0;
	char *str;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "((null))";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX2(value);
		}
	}
}
