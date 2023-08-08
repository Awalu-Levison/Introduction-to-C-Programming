#include "main.h"
/**
 * print_times_table - Prints n-times-table
 * @n: Integer value to use
 */
void print_times_table(int n)
{
	int i, j;

	n = 6;

	if (n < 0 || n > 15)
	{
		_putchar(' ');
	}

	else
	{
		for (i = 0; i < n; i++)
		       _putchar('0');

		for (j = 0; j < i; j++)
		{
			int x = (i * j);

			if(x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
