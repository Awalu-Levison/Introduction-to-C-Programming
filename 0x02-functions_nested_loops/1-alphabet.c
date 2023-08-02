#include "main.h"
/**
 * print_alphabet - Prints alphabet in lower cases
 * Return:0 (Always on success)
 */
void print_alphabet(void)
{
	int lowercase;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
