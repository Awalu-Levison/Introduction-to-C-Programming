#include "header.h"

/**
 * print_chessboard - Printing the chessboard
 * @a: Array to be used
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int first_var, second_var;

	for (first_var = 0; first_var < 8; first_var++)
	{
		for (second_var = 0; second_var < 8; second_var++)
			_putchar(a[first_var][second_var]);
		_putchar('\n');
	}
}
