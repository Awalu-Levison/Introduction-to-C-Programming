#include "main.h"
/**
 * print_unsigned - Print non ero value
 * @args: The arguments passed to the function
 * Return: Characters printed
 */
int print_unsigned(va_list args)
{
	int n = va_arg(args, int);
	int num, last_n = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last_n < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_n = -last_n;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
		_putchar(last + '0');
	}
	return (i);
}
