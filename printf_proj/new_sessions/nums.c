#include "main.h"
/**
 * nums - Print numbers passed to the function
 * @args: Arguments passed to the function
 * Return: Number of characters printed
 */
int nums(va_list args)
{
	int n;
	int flag;
	int len;
	unsigned int num;
	 
	n = va_arg(args, int);
	flag = 1;
	len = 0;

	if (n < 0)
	{
		len += putchr('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / flag > 9)
		flag *= 10;

	for (; flag != 0)
	{
		len += _putchr('0' + num / flag);
		num %= flag;
		num /= 10;
	}
	return (len);
}

/**
 * unsigned_num - Print unsigned integers
 * @args: The actual number given by the user
 * Return: Number of characters printed
 */
int unsigned_num(unsigned int n)
{
	int flag;
	int len;
	unsigned int num;

	flag = 1;
	len = 0;

	num = n;

	for (; num / flag > 9)
		flag *= 10;

	for (; flag != 0)
	{
		len += _putchr('0' + num / flag);
		num %= flag;
		num /= 10;
	}
	return (len);
}
