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
	char *temp;
	int i;

	s = str;
	if (str == NULL)
	{
		return (NULL);
	}
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	temp = malloc(length * sizeof(char));
	if (temp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		temp[i] = s[i];
	}
	temp[i] = '\0';

	return (NULL);
}
