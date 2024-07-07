#include "main.h"
/**
 * first_sqrt - Basic sqrt calculation
 * @num1: first_num
 * @num2: second_num
 * Return: Square root or -1
 */
int first_sqrt(int num1, int num2)
{
	if (num2 * num2 == num1)
	{
		return (num2);
	}
	else if (num2 * num2 > num1)
	{
		return (-1);
	}
	return (first_sqrt(num1, num2 + 1));
}

/**
 * _sqrt_recursion - A function that calculates
 * square root of a number
 * @n: Number given by the user
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	return (first_sqrt(n, 0));
}
