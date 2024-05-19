#include "main.h"
/**
 * *rot13- Encoding strings into number using rot-13 algorithm
 * @s: String variable to iterate
 * Return: (A character variable)
 */
char *rot13(char *s)
{
	int x, y;

	char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char second[] = "NOPQRSTUVWZYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; first[y] != '\0'; y++)
		{
			if (s[x] == first[y])
			{
				s[x] = second[y];
				break;
			}
		}
	}
	return (s);
}
