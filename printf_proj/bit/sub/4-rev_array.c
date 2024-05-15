#include "main.h"
/**
 * reverse_array - Reversing the array of type int
 * @a: First parameter
 * @n: Second parameter
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x;
	int y; /*temprary var for 
		 swapping process*/

	/*Iterate through the array*/
	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
