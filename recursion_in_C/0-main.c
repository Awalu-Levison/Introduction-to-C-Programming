#include <stdio.h>
/**
 * main - Entry point of program
 * Description: A basic program using factorial method in recursion
 * Return: 0 is always success
 */
int main(void)
{
	long int i = 12;

	printf("The factorial of %ld is %ld\n", i, factorial(i));
	return (0);
}
