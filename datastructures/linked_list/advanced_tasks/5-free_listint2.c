#include "lists.h"
/**
 ** free_listint2 - Free meory of a list
 ** @head: Pointer to the first node
 ** Return: void
 **/
void free_listint2(listint_t **head)
{
	listint_t *i; /*i: Temporary pointer*/

	if (head == NULL)
		return;
	while (*head)
	{
		i = (*head)->next;
		free(*head);
		*head = i;
	}
	head = NULL;
}
