#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint- a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: parameter.
 *
 * Return: int.
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tracker;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	tracker = head;
	while (tracker != NULL)
	{
		sum = sum + tracker->n;
		tracker = tracker->next;
	}
	return (sum);
}

