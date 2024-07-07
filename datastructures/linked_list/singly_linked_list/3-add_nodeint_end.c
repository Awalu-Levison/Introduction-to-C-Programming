#include "lists.h"

/**
 * add_nodeint_end - A fucntion that adds new nod
 * at the end of the list
 * @head: The pointer to the first node of the list
 * @n: Data used in the programme
 * Return: Address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *temp;

	if (head == NULL)
		return (NULL);

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	temp = *head;
	endnode->next = NULL;
	endnode->n = n;

	if (*head == NULL)
		*head = endnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endnode;
	}
	return (*head);
}
