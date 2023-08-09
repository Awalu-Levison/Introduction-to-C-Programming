#include <stdio.h>
/**
 * factorial - The factorial function signature to calculate
 * the factorial of a given number recursively
 * @n: Parameter used (input by the user)
 * Return: 0 is success
 */
unsigned long long int factorial(unsigned int n)
{
	if (n <= 1)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
