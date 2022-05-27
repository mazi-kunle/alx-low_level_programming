#include "main.h"
#include <stdlib.h>
/**
 * free_list- a function that frees a list_t list.
 * @head: parameter.
 *
*/

void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		free(current->str);
		free(current);
		current = current->next;
	}
}
