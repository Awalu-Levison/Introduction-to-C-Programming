#include "lists.h"
/**
 * sum_dlistint - A function that return sum of all data
 * in a doubly linked list
 * @head: Reference to the first node
 *
 * Return: Sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
