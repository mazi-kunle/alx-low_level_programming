#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint- a function that adds a new node at the beginning of a
 * doubly linked list.
 * @head: head of the linked list.
 * @n: data to add.
 *
 * Return: the address of the node if successful, NULL if otherwise.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
