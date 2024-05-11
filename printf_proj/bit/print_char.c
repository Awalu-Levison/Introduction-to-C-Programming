#include "main.h"
/**
 * print_c - Print a character to the stdout
 * @val: Arguments
 * Return: 1 baesd on the size of character
 */
int print_c(va_list val)
{
	char mychar;

	mychar = va_arg(val, int);
	_putchar(mychar);
	return (1);
}
