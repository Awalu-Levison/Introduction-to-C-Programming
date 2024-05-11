#include "main.h"

/**
 * recursive - Recursively printing integers
 * @n: The number passed to the function
 * Return: Recursive value
 */
int print_int(int num)
{
	int i, j = 0;

	if (num == 0)
		return (0);

	i = num / 10;
	print_int(i);
	putchr((i % 10) + '0');
	j += 1;
	return (j);
}
