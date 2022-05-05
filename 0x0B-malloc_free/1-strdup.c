#include "main.h"
#include <stdlib.h>
/**
 * _strdup- implement strdup.
 *
 * @str: string to be copied.
 *
 * Return: the copied string.
 *
*/

char *_strdup(char *str)
{
	char *s;
	char *temp, *ptr;
	int length;

	s = str;
	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		length++;
		str++;
	}

	temp = malloc(length * sizeof(char) + 1);
	ptr = temp;
	if (temp == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		*temp = *s;
		temp++;
		s++;
	}
	*temp = '\0';

	return (ptr);
}
