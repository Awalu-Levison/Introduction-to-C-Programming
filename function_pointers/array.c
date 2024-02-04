#include <stdio.h>
/**
 * something
 */
int main(void)
{
	int array[] = {45, 68, 90};
	int *array_ptr = array;

	// print all elements in array
	printf(" First element: %d\n", *(array_ptr++));
	printf("Second element: %d\n", *(array_ptr++));
	printf(" Third element: %d\n", *array_ptr);
	return (0);
}
