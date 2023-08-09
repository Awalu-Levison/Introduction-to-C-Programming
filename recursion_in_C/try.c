#include <stdio.h>
/**
 * print - Printing the number series
 * @nb: Parameter to use
 * Return: 0 is success
 * main - Entry point
 */
int print(int nb)
{
	if (nb < 0)
	{
		return (0);
	}

	printf("%d", nb + print(nb - 1));
	nb --;
	return (nb);
}
int main(void)
{
	print(4);
	printf("\n");
	return (0);
}
