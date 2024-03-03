#include <stdio.h>
#include <stdlib.h>
/**
 * Description - Creating a node with Jenny's Lectures
 * node: Name of data type to be used in struct data types
 */
struct node
{
	int age;
	int choice;
	struct node *next; /*next: pointer to the next node*/

	struct node *head, *new_node, *temp;
};
/**
 * main - Basics of linked list
 * Return: 0 Upon successful execution
 */
int main(void)
{
	struct node *head, *new_node, *temp;
	head = NULL;

	while (choice)
	{
		new_node = (struct node *)malloc(sizeof(struct node));
		printf("Enter Age\n");
		scanf("%d ", &new->data);
		new_node->next = 0;
	}
	if (head == NULL)
	{
		head->temp = new_node;
	}
	else
	{
		temp->next = new_node;
		temp = new_node;
	}
	while (temp != NULL)
	{
		printf("%d", temp->age);
		temp = temp->next;
		getch(1);
	}
	return (0);
}
