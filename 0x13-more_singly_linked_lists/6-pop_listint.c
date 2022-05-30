#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s data (n).
 * @head: parameter.
 *
 * Return: int.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
