#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the diagonal sum
 * of a square matrix
 * @a: Pointer variable parameter to be used
 * @size: The size of the square matrix given
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, first_sum = 0, second_sum = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		first_sum = first_sum + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		second_sum = second_sum + a[j];
	printf("%d, %d\n", first_sum, second_sum);
}
