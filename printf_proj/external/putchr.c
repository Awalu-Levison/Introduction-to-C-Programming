#include "main.h"
/**
 * _putchr - Print the character
 * @c: The character passed to the function
 * Return: Number of characters printed
 */
int putchr(char c)
{
	return (write(1, &c, 1));
}
