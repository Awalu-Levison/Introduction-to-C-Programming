#include "main.h"
/**
 * num_power - Calculating power of a number
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: Result of power
 */
unsigned long int num_power(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - The art of binary notation
 * @n: The number passed to the function
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, check; /*i: divisor*/
	char a;

	a = 0;

	i = num_power(2, sizeof(unsigned long int) * 8 - 1);
	while (i != 0)
	{
		check = n & i;
		if (check == i)
		{
			a = 1;
			_putchar('1');
		}
		else if (a == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}
