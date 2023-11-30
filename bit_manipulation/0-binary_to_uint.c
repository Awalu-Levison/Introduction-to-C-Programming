#include "main.h"
/**
 ** binary_to_uint - Changing from binary to unsigned integer
 ** @b: Pointer to array of characters
 ** Return: Converted number or 0 if fail
 **/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	j = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}

	return (j);
}
