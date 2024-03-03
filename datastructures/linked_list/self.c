#include <stdio.h>
#include <stdlib.h>
/*
 * struct node - self referencial struct
 * Description: This is singly linked list
 * creating a node of the list
 */
//Creating the first node
struct node {
	int data;
	struct node *link; //Link to another node
};


/**
 * main - Something
 *
 * Return: Evrything
 */
int main(void)
{
	//Adding data to the first node
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	//Second node
	struct node *current = malloc(sizeof(struct node));
	current->data = 98;
	current->link = NULL;
	head->link = current; //Link first node to second node

	//Third node	
	current = malloc(sizeof(struct node));
	current->data = 3;
	current->link = NULL;
	head->link->link = current;
	//Link second node to third node

	printf("First Node is : %d\n", head->data);
	printf("Second Node is : %d\n", current->data);
	printf("Third  Node is : %d\n", (head->link)->current.data);

	return (0);
}
