#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk- search for a string in a set of bytes.
 * @s: parameter.
 * @accept: parmeter.
 * Return: char.
*/

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		accept++;
	}
	return (NULL);
}
