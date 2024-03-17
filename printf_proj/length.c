#include "main.h"
/**
 * _strlen - A function that Find length of string
 * @s: String parsed to the function
 * Return: Number of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
