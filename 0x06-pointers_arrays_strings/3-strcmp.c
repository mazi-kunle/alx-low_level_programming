#include "main.h"
/**
 * _strcmp- compares two strings.
 * @s1: parameter.
 * @s2: parameter.
 * Return: 0 if success, non zero otherwise.
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 > *s2)
		{
			return (1);
		}
		else if (*s1 < *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
