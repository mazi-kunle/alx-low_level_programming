#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list- a function that prints all the elements of a list_t list.
 * @h: later.
 * Return: int.
*/
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *current;

	count = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}
	return (count);
}

