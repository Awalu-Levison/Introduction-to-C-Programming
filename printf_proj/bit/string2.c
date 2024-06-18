#include "main.h"
/**
 * print_str - Print a string given to the function by the user
 * @val: Variadic type of arguments given by the user
 * @Return: Length of string given by user
 */
int print_str(va_list val)
{
	char *mystr;
	int i;
	int len;

	mystr = va_arg(val, char *);
	if (mystr == NULL)
	{
		mystr = "(null)";
		len = _strlen(mystr);
		for (i = 0; i < len; i++)
			_putchar(mystr[i]);
		return (len);
	}
	else
	{
		len = _strlen(mystr);
		for (i = 0; i < len; i++)
			_putchar(mystr[i]);
		return (len);
	}
}
