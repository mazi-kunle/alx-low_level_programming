#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc- a function that reallocates a memory block
 * using malloc and free.
 * @ptr: parameter.
 * @old_size: parameter.
 * @new_size: parameter.
 * Return: void.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *temp;

	if (ptr == NULL)
	{
		temp = malloc(new_size);
		free(ptr);
	} else if (new_size < old_size)
	{
		temp = malloc(new_size);
		strncpy(temp, ptr, new_size);
		temp[new_size - 1] = '\0';
		free(ptr);
	} else if (new_size > old_size)
	{
		temp = malloc(new_size);
		strncpy(temp, ptr, old_size);
		free(ptr);
	} else if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	} else if (old_size == new_size)
	{
		return (ptr);
	}
	return (temp);
}

