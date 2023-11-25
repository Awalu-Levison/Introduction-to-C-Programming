#include "lists.h"
/**
 * *add_node_end - Add node to the end of the list
 *
 * @head: Pointer to the noext node
 * @str: String passed to the function
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	old = *head;
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
