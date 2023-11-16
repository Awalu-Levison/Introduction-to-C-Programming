#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*variadic function*/
int sum(int count, ...)
{
	va_list args; /*pointer to the arguments(args)*/
	va_start(args, count); /*initialise the arguments*/

	int s = 0;
	int i;

	for (i = 0; i < count; i++)
	{
		/*getting parameters passed to the function*/
		int x = va_arg(args, int);
		s += x;
	}
	va_end(args);

	return (s);
}
int main(int argc, char *argv[])
{
	printf("Sum of multiple No. is : %d\n", sum(2, 7, 7));

	return (0);
}
