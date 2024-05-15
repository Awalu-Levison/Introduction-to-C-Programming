#include "main.h"
/**
 * print_pointer - A function that print address of a variable
 * @val: Variadic type of variable
 * Return: Address of the variable
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_pointer(a);
	return (b + 2);
}
