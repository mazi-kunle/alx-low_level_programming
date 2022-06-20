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
	int i;
	char *str = s;
	char *str2 = accept;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		for (i = 0; str2[i] != '\0'; i++)
		{
			if (*str == str2[i])
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}
