#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array- a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: parameter.
 * @c: parameter.
 *
 * Return: array.
 *
*/

char *create_array(unsigned int size, char c)
{
	char *temp;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	temp = malloc(sizeof(char) * size);
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		temp[i] = c;
	}
	return (temp);
}
