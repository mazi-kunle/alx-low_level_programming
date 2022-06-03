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

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (head == NULL || idx == 0)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	count = 0;
	while (temp != NULL)
	{
		if (count == (idx - 1))
		{
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

