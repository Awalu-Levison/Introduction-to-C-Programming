#include "main.h"
/**
 * cap_string - Capitalise everything in
 * a given string
 * @i: Character variable to use
 * Return: (A character value)
 */
char *cap_string(char *i)
{
	int n = 0;

	while (i[n])
	{
		while (!(i[n] >= 'a') && (i[n] <= 'z'))
			n++;
		if (i[n - 1] == ' ' ||
				i[n - 1] == '\t' ||
				i[n - 1] == '\n' ||
				i[n - 1] == ',' ||
				i[n - 1] == ';' ||
				i[n - 1] == '.' ||
				i[n - 1] == '!' ||
				i[n - 1] == '?' ||
				i[n - 1] == '"' ||
				i[n - 1] == '(' ||
				i[n - 1] == ')' ||
				i[n - 1] == '{' ||
				i[n - 1] == '}' ||
				n == 0)
			i[n] -= 32;
		n++;
	}
	return (i);
}
