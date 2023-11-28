#include "lists.h"
listint_t *extra_node(int n);
/**
 ** extra_node - Creating a new node
 ** @n: Data of node
 ** Return: Newly added node or NULL if fails
 **/
listint_t *extra_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 ** insert_nodeint_at_index - Add node to the linked list
 ** at a given position
 ** @head: Pointer to the first node
 ** @idx: Position to be used
 ** @n: Number of elements
 ** Return: Newly added node or NULL if fails
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a, *b, *new; /*a: temporary*/

	a = *head;
	if (head == NULL)
		return (NULL);
	new = extra_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && a != NULL; i++)
		a = a->next;
	if (a == NULL)
		return (NULL);
	if (idx == 0)
		new->next = a;
	else
	{
		b = a->next;
		a->next = new;
		new->next = b;
	}
	return (new);
}
