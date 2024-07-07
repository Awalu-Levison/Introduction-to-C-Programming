#include "lists.h"

/**
 * pop_listint - Delete the head node of a list
 * @head: Pointer to the first node
 * Return: Node's data of the deleted node head
 */
int pop_listint(listint_t **head)
{
	listint_t *tmpvar;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmpvar = *head;
	*head = (*head)->next;
	free(tmpvar);
	return (n);
}
