#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2- a function that frees a listint_t list.
 * @head: parameter.
 *
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
