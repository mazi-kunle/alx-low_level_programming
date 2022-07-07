#include "lists.h"
/**
 * print_dlistint- A function that prints all the elements of a
 * dlistint_t list.
 * @h: head of the linked list.
 *
 * Return: the no of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t length;
	const dlistint_t *tmp;

	length = 0;
	tmp = h;
	while (tmp != NULL)
	{
		length++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (length);
}
