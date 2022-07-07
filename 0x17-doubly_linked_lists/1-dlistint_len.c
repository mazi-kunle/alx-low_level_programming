#include "lists.h"
/**
 * dlistint_len- A function that prints all the elements of a
 * dlistint_t list.
 * @h: head of the linked list.
 *
 * Return: the no of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length;
	dlistint_t *tmp;

	length = 0;
	tmp = h;
	while (*tmp)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}
