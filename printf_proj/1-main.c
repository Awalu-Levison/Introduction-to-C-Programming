#include "main.h"
/**
 * main - Testing the printf function
 * Return: 0
 */
int main(void)
{
	char letter = 'a';
	char name[] = "Awalu";
	int r_val1, r_val2;

 /*Using C printf() standard function*/
	puts("------------\nUsing printf()\n----------------");
	r_val1 = printf("%s did %c 100%% Good job\n", name, letter);
	printf("r_val1 is :%d\n", r_val1);

 /*Using user defined putchr() function*/
	puts("------------\nUsing putchr()\n----------------");
	r_val2 = _printf("%s did %c 100%% Good job\n", name, letter);
	printf("r_val2 is :%d\n", r_val2);

	return (0);
}
