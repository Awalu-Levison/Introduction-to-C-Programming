#include <stdio.h>
/**
 * program
 * Desc: Something
 */
int add(int a, int b)
{
	return (a + b);
}
int subtract(int a, int b)
{
	return (a - b);
}
int mult(int a, int b)
{
	return (a * b);
}
int divide(int a, int b)
{
	return (a / b);
}
int (*ptr)(int, int);

int main(void)
{
	int result1, result2, result3, result4;


	ptr = add;
	result1 = ptr (27, 3);

	ptr = subtract;
	result2 = ptr(27, 3);

	ptr = mult;
	result3 = ptr(27, 3);

	ptr = divide;
	result4 = ptr(27, 3);

	//Printing values
	printf("========= Addition is: %d =========\n", result1);
	printf("========= Subtraction is: %d =========\n", result2);
	printf("========= Multiplication is: %d =========\n", result3);
	printf("========= Division is: %d =========\n", result4);

	return (0);
}
