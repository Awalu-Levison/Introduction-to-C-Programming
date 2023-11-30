#include "main.h"
/**
 * binary_to_uint - A function that converts numbers from
 * binary number to unsigned integers
 * @b: Pointer to character string
 * Return: Converted number or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	j = 0;
	if (!j)
		return (0);
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}
	return (j);
}
