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
	int age = 17;

 /*Using C printf() standard function*/
	puts("\n-------Using printf()--------\n");
	r_val1 = printf("%s did %c 100%% cul\n", name, letter);
	r_val1 += printf("Codetrybe has up to %d main officials\n", age);
	printf("r_val1 is :%d\n", r_val1);

 /*Using user defined putchr() function*/
	_printf("\n-------Using _printf()--------\n");
	r_val2 = _printf("%s did %c 100%% cul\n", name, letter);
	r_val2 += _printf("Codetrybe has up to %d main officials\n", age);
	/*r_val2 += _printf("Awalu is aged %d in std1\n", age);*/
	printf("r_val2 is :%d\n", r_val2);
	/*_printf("age2 is :%d\n", age2);*/

	return (0);
}
