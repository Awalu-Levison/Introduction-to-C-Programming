#include "main.h"
/**
 * print_oct - A program that converts unsigned integer
 * to octal number system
 * @val: Variadic type of arguments
 * Return: The number of bits printed
 */
int print_oct(va_list val)
{
	int i, counter = 0;
	int *array;

	unsigned int num = va_arg(val, unsigned int);
	unsigned temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;

	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '48');
	free(array);
	return (counter);
}
