#include "main.h"
#define LIMIT 100
/**
 * push - Insert stack elemenmts
 */
void push(void)
{
	int stack[LIMIT];
	int top;
	int i;
	int choice;
	int element;

	if (top == LIMIT - 1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("Enter the element to be inserted:");
		scanf("%d", &element);
		top++;
		stack[top] = element;
	}
}

