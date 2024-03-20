#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	puts("%d\t%o\t%x\t%X\t%i");

	for (n = 0; n < 20; n++)
		printf("%d\t%o\t%x\t%X\t%i", n, n, n, n, n);
	printf("\n");
	return (0);
}
