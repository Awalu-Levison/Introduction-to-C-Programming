#include "lists.h"

/**
 * dlistint_len - A function that returns number of elements
 * in a doubly linked list
 * @h: Reference to the first node
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
