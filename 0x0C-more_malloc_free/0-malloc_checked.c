#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked- a function that allocates memory using malloc.
 * @b: parameter.
 * Return: void.
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
