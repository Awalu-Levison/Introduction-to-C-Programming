#include "main.h"
/**
 * clear_bit - Changing value of bit to 0
 * @n: Number of Bit being used upon
 * @index: Position of a bit
 * Return: 1 or 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
