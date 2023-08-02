#include "main.h"
/**
 *  print_to_98 - Prints natural numbers up to 98
 *  @n:parameter to check upon
 */
void print_to_98(int n)
{
	int num1, num2;

	if (n <= 98)
	{
		for (num1 = n; num1 <= 98; num1++)
		{
			if (num1 != 98)
				printf("%d, ", num1);
			else if (num1 == 98)
				printf("%d\n", num1);
		}
	}
	else if (n >= 98)
	{
		for (num2 = n; num2 >= 98; num2--)
		{
			if (num2 != 98)
				printf("%d, ", num2);
			else if (num2 == 98)
				printf("%d\n", num2);
		}
	}
}
