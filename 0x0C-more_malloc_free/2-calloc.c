#include "main.h"
#include <stdlib.h>
/**
 * _calloc- a function that allocates memory for an array, using malloc.
 * @nmemb: parameter.
 * @size: parameter.
 * Return: void.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
