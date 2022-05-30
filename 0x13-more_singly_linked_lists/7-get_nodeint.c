#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index- a function that returns the nth node
 * of a listint_t linked list.
 * @head: parameter.
 * @index: parameter.
 *
 * Return: listint_t.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *tracker;

	count = -1;
	tracker = head;
	while (tracker != NULL)
	{
		count++;
		if (count == index)
		{
			return (tracker);
		}
		tracker = tracker->next;
	}
	return (NULL);
}
