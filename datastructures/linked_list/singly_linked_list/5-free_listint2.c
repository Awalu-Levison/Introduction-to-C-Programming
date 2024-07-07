#include "lists.h"

/**
 * free_listint2 - Free up the list and assign
 * the head pointer to NULL value
 * @head: Pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
