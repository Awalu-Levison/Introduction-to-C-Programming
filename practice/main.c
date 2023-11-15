#include <stdio.h>
/**
 * main - Testing codes
 *
 * Return: 0 on successful
 */
int main(void)
{
	int num1, num2, size = 20;

	printf("Enter value of first number\n");
	scanf("%d", &num1);

	printf("Enter value of second number\n");
	scanf("%d", &num2);
	int result = num1 + num2;

	if (size >= result)
	{
		printf("The numbers are too big, so Just beeping no addition\a\n");
		size++;
	}
	else
	{
		printf("The beeping sound failed, so the sum of two nums is = %d\n", result);
	}


	return (0);
}
