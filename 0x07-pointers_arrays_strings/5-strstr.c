#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * compare- function to compare two strings.
 * @X: parameter.
 * @Y: parameter.
 *
 * Return: int.
*/
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

/**
 * _strstr- fill memory with a constant byte.
 * @haystack: parameter.
 * @needle: parameter
 * Return: *char.
*/
char *_strstr(char *haystack, char *needle)
{
	if (strlen(needle) == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
