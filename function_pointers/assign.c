#include <stdio.h>
/**
 * something
 */
int main(void)
{
	int *ptr, ptr2;
	int i = 42;
	ptr = &i;
	//printf("address of ptr is :%p\n", ptr);
	*ptr = 50;
	//printf("address of ptr is :%p\n", ptr);
	return (0);
}
