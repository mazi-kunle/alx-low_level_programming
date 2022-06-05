#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index- a function that deletes the
 * node at index index of a listint_t linked list.
 * @head: parameter.
 * @index: parameter.
 *
 * Return: int.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int count;

	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL && index == 0)
	{
		return (1);
	}
	temp = *head;
	count = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		if (count == (index - 1))
		{
			temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
			return (1);
		}
		count++;
		temp = temp->next;
	}
	return (-1);
}



