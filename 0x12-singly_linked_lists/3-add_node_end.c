#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end- a function that adds a new node at the end
 * of a list_t list.
 * @head: parameter.
 * @str: parameter.
 *
 *
 * Return: linked list.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *tracker;

	tracker = *head;
	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
	{
		return (NULL);
	}
	end_node->str = strdup(str);
	end_node->len = strlen(str);
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
