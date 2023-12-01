#include "main.h"
/**
 * set_bit - Set bit value to 1 at given index
 * @n: Bit passed upon the function
 * @index: Position of the bit in particular
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;
	return (1);
}
