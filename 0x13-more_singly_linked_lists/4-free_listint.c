#include "lists.h"
#include <stdlib.h>
/**
 * free_listint- a function that frees a listint_t list.
 * @head: parameter.
 *
*/
void free_listint(listint_t *head)
{
	listint_t *tracker;

	while (head != NULL)
	{
		tracker = head;
		head = head->next;
		free(tracker);
	}
}
