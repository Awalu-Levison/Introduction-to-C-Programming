#include "main.h"
/**
 * _strlen - Find the length of string
 *
 * @s: The parsed to the function
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
