#include "lists.h"
#include <stdio.h>


/**
 * list_looping - Counting the number of nodes in a list.
 * @head: Pointer to trhe first node
 * Return: Number of nodes in the list.
 */
size_t list_looping(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t i = 1; /*counts nodes*/

	if (head == NULL || head->next == NULL)
		return (0);
	ptr1 = head->next;
	ptr2 = (head->next)->next;

	while (ptr2)
	{
		if (ptr1 == ptr2)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				i++;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			ptr1 = ptr1->next;
			while (ptr1 != ptr2)
			{
				i++;
				ptr1 = ptr1->next;
			}
			return (i);
		}
		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Printing list without memory leak.
 * @head: Pointer to the first node
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, idx = 0;

	i = list_looping(head);

	if (i == 0)
	{
		for (; head != NULL; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < i; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (i);
}











