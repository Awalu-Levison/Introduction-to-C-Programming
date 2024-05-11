#include "main.h"
/**
 * len_str - Find length of string
 * @s: String passed to the function
 * Return: Length of string
 */
int len_str(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
