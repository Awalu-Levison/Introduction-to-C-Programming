//#include <conio.h>
#include <stdio.h>
/**
 * main - Testing the function of clscr
 */
int main(void)
{
	int i;

	clrscr();
	for (i = 1, i <= 5; i++)
	{
		if (i / 2 == 0)
			; /*rretun nothing*/
		else
			printf("%d\n", i);
	}
	getch();

	return (0);
}
