#include "main.h"

/**
 * get_int - Print a digit given by user
 * @num: Number given by user
 * Return: Something
 */
int get_int(int num)
{
	int n;

	if (num == 0)
		return (0);

	n = num / 10;

	get_int(n);
	putchr(num % 10 + '0');

	return (0);
}
