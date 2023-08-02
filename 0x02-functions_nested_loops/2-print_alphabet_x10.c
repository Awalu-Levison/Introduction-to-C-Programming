#include "main.h"
/**
 **print_alphabet_x10 - Prints alphabet 10 times
 **/
void print_alphabet_x10(void)
{
	int iteration;
	int alpha_x10;

	for (iteration = 0; iteration <= 10; iteration++)
	{
		for (alpha_x10 = 97; alpha_x10 <= 122; alpha_x10++)
		{
			_putchar(alpha_x10);
		}
		_putchar('\n');
	}
}
