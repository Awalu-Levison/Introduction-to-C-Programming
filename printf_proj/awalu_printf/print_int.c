#include "main.h"
/**
 * print_int - Printing integers
 * @num: The number to be printed
 * Return: NUmbner of characters printed
 */
int print_int(int num)
{
	int count = 0;

	while (num != '\0')
	{
		num = va_arg(args, int);
		count++;
	}
	return (count);
}
