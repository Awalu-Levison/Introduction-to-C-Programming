#include "main.h"
/**
 * print_hex_value - A program that print a converted hexadecimal value
 * @num: unsigned long integer variable
 * Return: The number of bits printed
 */
int print_hex_pointer(unsigned long int num)
{
	long int i, counter = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;

	array = malloc(sizeof(long int) * counter);
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
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
