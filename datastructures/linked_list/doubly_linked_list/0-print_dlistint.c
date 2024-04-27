#include "lists.h"
/**
 * print_dlistint - Print all elements of a list
 * @h: Reference to the first node
 * Return: The list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
