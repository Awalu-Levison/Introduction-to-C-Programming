#include "main.h"
/**
 * get_bit - Calculate bit value at given index
 * @n: Bit passed to the function
 * @index: Position of the bit
 * Return: Value of bit [index]
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*i: divisor, j: checker*/
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	i = 1 << index;
	j = n & i;

	if (j == i)
		return (1);
	return (0);
}
