#include "main.h"
/**
 * _strspn- fill memory with a constant byte.
 * @s: parameter.
 * @accept: parameter
 * Return: int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	unsigned int i, j;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
