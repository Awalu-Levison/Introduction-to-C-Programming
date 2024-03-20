#include "main.h"
/**
 * str_print - Printing string using
 * @s: String parsed to the function
 * Return: Number of characters printed
 */
int str_print(char *s)
{
	int i = 0, count = 0; /*i: iterate thr string*/

	if (s)
	{
		while (s[i] != '\0')
		{
			putchr(s[i]);
			i++;
			count += 1;
		}
	}
	putchr('\n');
	return (count);
}
