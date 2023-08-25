#include "main.h"
/**
 ** *_memcpy - A function that copies memory area
 ** @dest: Destination variable that receives bytes from src
 ** @src: The source of bytes to be used
 ** @n: Available number of bytes
 ** Return: Destination bytes
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y;

	int v = n;

	for (y = 0; y < v; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
