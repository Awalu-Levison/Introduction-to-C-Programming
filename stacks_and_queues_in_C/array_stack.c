#include "main.h"
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

/**
 * pop - Remove stack elemenmts
 */

void pop(void)
{
	int stack[LIMIT];
	int top;
	int i;
	int choice;
	int element;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		element = stack[top];
		printf("The deleted item is %d\n", stack[top]);
		top--;
	}
}

/**
 * display - Display stack elemenmts
 */
void display(void)
{
	int stack[LIMIT];
	int top;
	int i;
	int choice;
	int element;

	if (top == -1)
	{
		printf("Stack underflow\n");
	}
	else if (top > 0)
	{
		printf("The elements of the stack are:\n");
		for (i = top; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
}
