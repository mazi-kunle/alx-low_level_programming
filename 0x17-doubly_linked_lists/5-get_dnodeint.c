#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index- A function that returns the nth node of
 * a dlistint_t linked list.
 * @head: head of the linked list.
 * @index: index to check for node.
 *
 * Return: the address of the node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count, flag;
	dlistint_t *ptr;

	count = 0;
	flag = 0;
	ptr = head;
	while (ptr != NULL)
	{
		if (count == index)
		{
			flag = 1;
			break;
		}
		count++;
		ptr = ptr->next;
	}
	if (flag == 1)
	{
		return (ptr);
	}
	return (NULL);
}
