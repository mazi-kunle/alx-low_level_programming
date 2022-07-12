#include "main.h"
#include <stdio.h>
/**
 * _strstr- fill memory with a constant byte.
 * @haystack: parameter.
 * @needle: parameter
 * Return: *char.
*/
char *_strstr(char *haystack, char *needle)
{
	char *temp, *end;
	int count, length, i, j;

	temp = haystack;
	end = needle;
	count = 0;
	length = 0;
	while (*end != '\0')
	{
		length++;
		end++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			temp = temp + i;
		}
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
		if (needle[j] == temp[j])
		{
			count++;
		}
	}
	if (count == length)
	{
		return (needle);
	}
	return (NULL);
}
