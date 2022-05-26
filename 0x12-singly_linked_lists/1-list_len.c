#include "lists.h"
#include <stddef.h>
/**
 * list_len- a function that returns the number of elements
 * in a linked list.
 * @h: parameter.
 * Return: int.
*/

size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t count;

	count = 0;
	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
