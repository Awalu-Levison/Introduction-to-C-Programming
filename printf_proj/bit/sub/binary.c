#include "main.h"

/**
 * print_bin - A function that convert
 * input decimal numbers to binary format
 * @val: Variadic number of variables
 * Return: Bits printed
 */
int print_bin(va_list val)
{
	int count = 0;
	int flag = 0;
	int i;
	int a = 1, b;

	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
