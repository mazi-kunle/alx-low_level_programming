#include "lists.h"
/**
 * listint_len- a function that returns the number of
 * elements in a linked listint_t list.
 * @h: parameter.
 *
 * Return: no of elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *tracker;

	count = 0;
	while (tracker != NULL)
	{
		count++;
		tracker = tracker->next;
	}
	return (count);
}
