#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint- A function that frees a dlistint_t list.
 * @head: head of the linked list.
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
