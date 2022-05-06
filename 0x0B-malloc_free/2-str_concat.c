#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat- a function that concatenates two strings.
 *
 * @s1: parameter.
 * @s2: parameter.
 *
 * Return: char.
 *
*/

char *str_concat(char *s1, char *s2)
{
	char *temp, *temp2;
	int length;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	} else if (s2 == NULL)
	{
		s2 = "";
	}

	temp = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	if (temp == NULL)
	{
		return (NULL);
	}
	temp2 = temp;

	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (temp2);
}
