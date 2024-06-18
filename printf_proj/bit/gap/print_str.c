#include "main.h"
/**
 * print_str - A function that print string to the stdout
 * @val: Arguments
 * Return: Length of string given by user
 */
int print_str(va_list val)
{
	char *mystr;

	int len;

	len = 0;

	mystr = va_arg(val, char *);

	if (mystr == NULL)
		return (-1);
	len += write(1, mystr, _strlen(mystr));
	return (len);
}
