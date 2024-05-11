#include "main.h"
/**
 * reverse - A function that prints in in reverse order
 * @n: Integer passed to the function
 * Return: Recursive value
 */
int int_recus(int number)
{
	int i;

	if (number == 0)
		return (0);
	else
		i = number / 10;
	int_recus(number);
	putchr(i % 10 + '0');
	return (0);
}
