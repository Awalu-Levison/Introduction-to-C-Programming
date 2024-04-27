#include "lists.h"
/**
 * free_dlistint - Free up memory spacels
 * @head: Address to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}


}
