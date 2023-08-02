#include "main.h"
/**
 * _printFizzBuzz - Prints Fizz (multiples of 3), Buzz (multiples of 5)
 * and FizzBuzz (multiples of both 3 and 5)
 * @n:Parameter to be used
 * Return: (0 On successful execution)
 */
int _printFizzBuzz(int n)
{
	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf(n);
		}
		printf("\n");
	}
}
