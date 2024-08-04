#include "main.h"
/**
 * nums - Print numbers passed to the function
 * @args: Arguments passed to the function
 * Return: Number of characters printed
 */
int nums(va_list args)
{
	int n;
	int check;
	int len;
	unsigned int num;
	 
	n = va_arg(args, int);
	flag = 1;
	len = 0;

	if (n < 0)
	{
		len += putchr('-');
		num *= -1;
	}
	else
	{
		num = n;
	}
}
