#include "main.h"
#include <stdarg.h>
/**
 * do_c - format conversion of character
 * @args: variadic argument
 * Return: print char to stdout on success
 */
void do_c(va_list args)
{
	char letter;

	letter = va_arg(args, int);

	_putchar(letter);
}
