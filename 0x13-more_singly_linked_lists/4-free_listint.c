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

	tracker = head;
	while (tracker != NULL)
	{
		free(tracker);
		tracker = tracker->next;
	}
}
