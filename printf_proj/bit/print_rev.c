#include "main.h"
/**
 * print_rev - Print a string in reverse mode
 * @val: Variadic type of variable
 * Return: Number of characters printed
 */
int print_rev(va_list val)
{
	char *mystr = va_arg(val, char *);
	int i;
	int j = 0;

	if (mystr == NULL)
		mystr = "(null)";
	while (mystr[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(mystr[i]);
	return (j);
}
