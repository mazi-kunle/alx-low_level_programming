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
 * delete_dnodeint_at_index- A function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: head of linked list.
 * @index: index.
 *
 * Return: 1 if successful, -1 if failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int length, count;

	count = 0;
	ptr = *head;
	if (*head == NULL)
	{
		return (1);
	}
	if (index == 0 && ptr->next == NULL)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	length = get_len(head); 
	if (index == 0 && ptr->next != NULL)
	{
		ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	if (length == (index + 1))
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}
	while (ptr->next != NULL)
	{
		if (count == index)
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
			free(ptr);
			return (1);
		}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}



