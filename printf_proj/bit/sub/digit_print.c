#include "main.h"

/**
 * digit_print - Print out digits passed to the function
 * @num: The number Passed to the function
 * @base: The base of the given number
 * Return: Number printed
 */
int digit_print(long num, int base)
{
	char *special_char;
	int counter;

	counter = 0;
	special_char = "0123456789abcdef";
	if (num < 0)
	{
		write(1, "-", 1);
		return (digit_print(-num, base) + 1);
	}
	else if (num < base)
	return (char_print(special_char[num]));
	counter = digit_print(num / base, base);
	return (counter + digit_print(num % base, base));
}
