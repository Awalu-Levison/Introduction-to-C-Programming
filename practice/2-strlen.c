#include "main.h"
/**
 * _strlen - Generates the length of a string
 * @s: Parameter to be used
 * Return: (0 on successful execution)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
	return (0);
}
