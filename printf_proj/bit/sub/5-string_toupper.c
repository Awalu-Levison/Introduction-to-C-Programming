#include "main.h"
/**
 * string_toupper - Changing string to upper case
 * @c: Character variable to use
 * Return: Character value
 */
char *string_toupper(char *c)
{
	int y;

	y = 0;
	while (c[y] != '\0')
	{
		if (c[y] >= 'a' && c[y] <= 'z')
			c[y] -= 32;
		y++;
	}
	return (c);
}
