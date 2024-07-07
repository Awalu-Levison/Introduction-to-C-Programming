#include "lists.h"
/**
 * print_listint - Printing all the elements of the list
 * @h: Pointer to the first node of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i; /*Count elements*/

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
