#include "main.h"
#include <stdio.h>
/**
 * _strchr- fill memory with a constant byte.
 * @s: parameter.
 * @c: parameter
 * Return: *char.
*/

char *_strchr(char *s, char c)
{
	char *temp;

	temp = s;
	while (*temp != '\0')
	{
		if (*temp == c)
		{
			return (temp);
		}
		temp++;
	}
	if (c == '\0')
	{
		s = "\0";
		return (s);
	}
	return (NULL);
}
