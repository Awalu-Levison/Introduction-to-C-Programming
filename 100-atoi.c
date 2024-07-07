#include "main.h"
/**
 * _atoi - conversion of a string to integerz
 * @s: The string in particular
 *
 * Return: Generates int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, length, f, my_digit;

	i = 0;
	d = 0;
	n = 0;
	length = 0;
	f = 0;
	my_digit = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			my_digit = s[i] - '0';
			if (d % 2)
				my_digit = -my_digit;
			n = n * 10 + my_digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

