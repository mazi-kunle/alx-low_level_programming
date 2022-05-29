#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end- a function that adds a new node at the end
 * of a list_t list.
 * @head: parameter.
 * @n: parameter.
 *
 *
 * Return: linked list.
*/

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	list_t *end_node, *tracker;

	tracker = *head;
	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (tracker->next != NULL)
		{
			tracker = tracker->next;
		}
		tracker->next = end_node;
	}
	return (end_node);
}
