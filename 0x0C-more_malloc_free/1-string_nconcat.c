#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat- a function that concatenates two strings.
 * @s1: parameter.
 * @s2: parameter.
 * @n: parameter.
 * Return: string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *temp;
	int length, i;

	if (s1 == NULL)
	{
		s1 = "";
	} else if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		length = strlen(s2);
	} else
	{
		length = n;
	}
	ptr = malloc((strlen(s1) + length + 1) * sizeof(char));
	temp = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (i < length)
	{
		*temp = *s2;
		temp++;
		s2++;
		i++;
	}
	*temp = '\0';
	return (ptr);
}
