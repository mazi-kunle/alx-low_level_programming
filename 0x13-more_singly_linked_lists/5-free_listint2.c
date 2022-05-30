#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- a function that frees a listint_t list.
 * @head: parameter.
 *
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *nnode;

	current = *head;

	while (current != NULL)
	{
		nnode = current->next;
		free(current);
		current = nnode;
	}
	if (*head != NULL)
	{
		*head = NULL;
	}
}
