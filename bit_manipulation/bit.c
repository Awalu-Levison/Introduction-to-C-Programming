#include <stdio.h>
/**
 ** main - ......................
 ** Return: 0 (success)
 **/
int main(void)
{
	unsigned int p = 60; /*60 = 0011 1100*/
	unsigned int q = 13; /*13 = 0000 1101*/

	int r = 0;
	r = p | q;
	printf("Bitwise OR operator of p & q is: %d\n", r);

	r = p & q;
	printf("Bitwise AND operator of p & q is: %d\n", r);

	r = ~p;
	printf("Bitwise complement of p is: %d\n", r);

	r = p ^ q;
	printf("Bitwise XOR of p & q is: %d\n", r);

	r = p >> 2;
	printf("Bitwise RIGHT SHIFT operator is: %d\n", r);

	r = p << 2;
	printf("Bitwise LEFT SHIFT operator is: %d\n", r);
}
