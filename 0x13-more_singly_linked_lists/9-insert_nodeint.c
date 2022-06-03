#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index- a function that inserts a new
 * node at a given position.
 * @head: parameter.
 * @idx: parameter.
 * @n: parameter.
 *
 * Return: listint_t.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = *head;
	count = 0;
	if (idx == 0)
	{
		temp->n = n;
		return (temp);
	}
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
			newnode = malloc(sizeof(listint_t));
			if (newnode == NULL)
			{
				return (NULL);
			}
			newnode->n = n;
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}


