#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_listint- a function that prints all the
 * elements of a listint_t list.
 * @h: parameter.
 *
 * Return: int.
 *
*/
size_t print_listint(const listint_t *h)
{
	size_t count;
	const listint_t *tracker;

	count = 0;
	tracker = h;
	while (tracker != NULL)
	{
		count++;
		printf("%d\n", tracker->n);
		tracker = tracker->next;
	}
	return (count);
}
