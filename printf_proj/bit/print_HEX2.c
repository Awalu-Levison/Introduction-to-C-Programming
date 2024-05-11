#include "main.h"
/**
 * print_HEX2 - A program that print integers in hexadecimal format
 * inside the custom string printinf function
 * @val: Variadic type of arguments
 * Return: The number of bits printed
 */
int print_HEX2(unsigned int num)
{
	int i, counter = 0;
	int *array;

	unsigned temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(int) * counter);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
