#include "lists.h"
/**
 ** print_listint - Printing the elements of a given list
 ** @h: Head pointer to the first node
 **
 ** Return: Number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		no_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (no_nodes);
}
