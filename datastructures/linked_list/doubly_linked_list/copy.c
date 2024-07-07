#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node at particular index
 * @h: Reference to the fisrt node
 * @idx: Indexfor the data to insert
 * @n: Data added to the node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *current;

	new = NULL;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		i = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;
		while (current != NULL)
		{
			if (i == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
				break;
			}
			current = current->next;
			i++;
		}
	}
	return (new);
}
