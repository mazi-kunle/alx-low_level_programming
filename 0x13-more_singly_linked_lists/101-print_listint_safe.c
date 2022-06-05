#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * print_listint_safe- a function that printf a linked list.
 * @head: head of the list.
 *
 * Return: no of nodes.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tracker;
	size_t count;

	if (head == NULL)
	{
		exit(98);
	}
	count = 0;
	tracker = head;
	while (tracker != NULL)
	{
		count++;
		tracker = tracker->next;
	}
	return (count);
}
