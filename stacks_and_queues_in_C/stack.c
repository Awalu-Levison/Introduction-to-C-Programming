#include "main.h"
/**
 * push - A function that insert elements into the stack
 */
#define LIMIT 100
void push()
{
	int stack[LIMIT], top, element;
	if(top == LIMIT- 1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		printf("Enter the element to be inserted :\n");
		scanf("%d", &element);
		top++;
		stack[top]=element;
	}
}

#include "main.h"
/**
 * main - Progtram Entry
 * Return: 0 on successful execution
 */
int main(void)
{
	push();

	return (0);
}
