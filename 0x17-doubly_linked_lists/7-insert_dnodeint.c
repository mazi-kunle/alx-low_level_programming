#include "lists.h"
#include <stdlib.h>
/**
 * get_len- get the no of nodes in a doubly linked list.
 * @h: head of the linked list.
 *
 * Return: no of nodes.
*/
unsigned int get_len(dlistint_t **h)
{
	dlistint_t *ptr;
	unsigned int length;

	length = 0;
	ptr = *h;
	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	return (length);
}

/**
 * insert_dnodeint_at_index- A function that inserts a new node at a
 * given position.
 * @h: head of the linked list.
 * @idx: index of the linked list.
 * @n: data to be inserted.
 *
 * Return: inserted node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr;
	unsigned int count, length;

	count = 0;
	ptr = *h;
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	length = get_len(h);
	if (length == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (ptr != NULL)
	{
		if (count == (idx - 1))
		{
			new->prev = ptr;
			new->next = ptr->next;
			ptr->next->prev = new;
			ptr->next = new;
			return (new);
		}
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}

