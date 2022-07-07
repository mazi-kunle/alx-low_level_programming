#include "lists.h"
#include <stdlib.h>
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
	dlistint_t *new;

	if (*h == NULL && idx == 0)
	{
		new = add_dnodeint(*h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	while (ptr != NULL)
	{
		if (count == idx)
		{
			ptr

