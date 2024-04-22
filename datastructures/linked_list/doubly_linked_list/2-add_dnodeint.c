#include "lists.h"

/**
 * add_dnodeint - A function that add node at the beginning of a list
 * @head: The reference of the first node
 * @n: The data defined in the list
 * Return: The newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/*Set data and pointers of the new node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
