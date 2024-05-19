#include "main.h"
/**
 * print_rot13- Encoding strings into number using rot-13 algorithm
 * @val: variadic type of variable
 * Return: A character variable
 */
int print_rot13(va_list val)
{
	int i, j, counter = 0;
	int k = 0;
	char *mystr = va_arg(val, char *);
	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (mystr == NULL)
		mystr = "(null)";
	for (i = 0; mystr[i]; i++)
	{
		k = 0;
		for (j = 0; first[i] && !k; j++)
		{
			if (mystr[i] == first[j])
			{
				_putchar(second[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(mystr[i]);
			counter++;
		}
	}

	return (counter);
}
