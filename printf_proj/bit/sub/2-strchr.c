#include "main.h"
/**
 * _strchr - Locating a character in a  given string
 * @s: The passed string to be used
 * @c: The character to be located inside the s string
 * Return: Character value
 */
char *_strchr(char *s, char c)
{
	int u = 0;

	for (; s[u] >= '\0'; u++)
	{
		if (s[u] == c)
			return (&s[u]);
	}
	return (0);
}
