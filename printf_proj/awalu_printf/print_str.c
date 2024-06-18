#include "main.h"
/**
 * print_str - A function that calculate string
 * @str: The string to be printed
 * Return: Number of characters to be printed
 */
int print_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
