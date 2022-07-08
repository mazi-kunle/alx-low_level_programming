#include "lists.h"
#include <stdlib.h>
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
	length = get_len(h);
	if (index == 0 && ptr != NULL)
	{
		ptr->next->prev = NULL;
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	if (length == (index + 1) && ptr != NULL)
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


