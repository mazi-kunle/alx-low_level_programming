#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end- A function that adds a new node at the end of
 * a doubly linked list.
 * @head: head of the linked list.
 * @n: data to add.
 *
 * Return: the added node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
