#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint- A function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of the linked list.
 *
 * Return: sum of the data.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
