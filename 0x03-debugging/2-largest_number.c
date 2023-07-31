#include "main.h"
/**
 ** largest_number - returns the largest of 3 numbers
 ** @a: first integer
 ** @b: second integer
 ** @c: third integer
 ** Return: largest number
 **/
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a < b && b > c) || (b < a && a < c))
	{
		largest = c;
	}
	else if ((a < c && c < b) || (c < a && a < b))
	{
		largest = b;
	}
	else
	{
		largest = a;
	}


	return (largest);
}
