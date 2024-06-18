#include <stdio.h>
#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: The passed string  to be used
 * @needle: The string to be found
 * Return: Something
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first_var = haystack;
		char *second_var = needle;
		while (*first_var == *second_var && *second_var != '\0')
		{
			first_var++;
			second_var++;
		}
		if (*second_var == '\0')
			return (haystack);
	}
	return (NULL);
}

