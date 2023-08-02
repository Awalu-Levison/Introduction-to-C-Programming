#include "main.h"
/**
 * _isdigit - Checks if the input is number or not
 * @c:Parameter to checkupon
 * Return: (0 on success)
 */
int _isdigit(int c)
{
	if ((c > '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
