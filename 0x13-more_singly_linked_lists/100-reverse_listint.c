#include "lists.h"
/**
 * reverse_listint- A function that revreses a single linked list.
 * @head: head of the linked list.
 *
 * Return: head of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
