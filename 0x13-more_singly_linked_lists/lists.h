#ifndef LIST_H_
#define LIST_H_

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node.
 *
 * Description: singlyy linked list node structure
 *
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);


#endif