#include "lists.h"
/**
 ** delete_nodeint_at_index - Deleting node at given index
 ** @head: Pointer to the first node
 ** @index: Position of the particular node
 ** Return: 1: successful or -1: upon failing
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1 = *head;
	listint_t *a = NULL; /*a: current node*/
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
		return (1);
	}
	while (i < index - 1)
	{
		if (!ptr1 || !(ptr1->next))
			return (-1);
		ptr1 = ptr1->next;
		i++;
	}
	a = ptr1->next;
	ptr1->next = a->next;
	free(a);
	return (1);
}
