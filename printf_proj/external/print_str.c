#include "main.h"
/**
 * print_str - Printing a string
 * @s: String given by user
 * Return: Chars printed
 */
int print_str(char *s)
{
	int counter = 0;
	int i;

	if (s == NULL)
	{
		return (-1);
	}
	while (*s != '\0')
	{
		i = write(1, s++, 1);
		if (i == -1)
		{
			return (-1);
		}
		counter += i;
	}
	if (i == -1)
	{
		return (-1);
	}
	counter += i;
	return (counter - 1);
}
