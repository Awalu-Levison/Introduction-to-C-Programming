#include "main.h"
/**
 * _printf - Variadic function for customised standard printf function
 * @format: The format specifier
 * Return: Number of strings being printed to STDOUT
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char}, {"%s", print_str}, {"%%", percent_print}, {"%d", print_dec}, {"%i", print_int}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", }, {}, {}, {}, {},
}
