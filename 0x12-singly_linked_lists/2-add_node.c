#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node- a function that adds a new node at the
 * beginning of a list_t list.
 * @head: parameter.
 * @str: parameter.
 *
 * Return: list_t.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
