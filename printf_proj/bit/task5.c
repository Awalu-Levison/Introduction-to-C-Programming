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

	str = va_arg(val, char *);
	if (str == NULL)
		str = "((null))";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX2(value);
		
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
