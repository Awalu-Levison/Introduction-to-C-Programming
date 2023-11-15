#include <stdio.h>
/**
 * main - practising some logic in C language
 */
int main(void)
{
	int a = 5, *p1;
	float b = 2.5, *p2;
	char c = 'a', *p3;

	p1 = &a;
	p2 = &b;
	p3 = &c;

	printf("Size is %d", sizeof(*p1));
	/*printf("Size is %f", sizeof(p2));*/
	/*printf("Size is %c", sizeof(p3));*/

	return (0);
}
