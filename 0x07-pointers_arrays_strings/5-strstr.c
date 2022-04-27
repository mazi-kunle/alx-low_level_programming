#include "main.h"
#include <stdio.h>
/**
 * _strstr- fill memory with a constant byte.
 * @haystack: parameter.
 * @needle: parameter
 * Return: *char.
*/
char* _strstr(char* haystack, char* needle)
{
	char *temp, *end;
  int length, count;
  
	temp = haystack;
	end = needle;
	length = 0;
	count = 0;
  while (*end != '\0')
  {
    length++;
    end++;
  }
	for (int i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			temp = temp + i;
		}
	}
	for (int j = 0; end[j] != '\0';+j++)
	{
		if (end[j] == temp[j])
		{
			count++;
		}
	}
	if (count == length)
	{
		return (needle);
	}
	else
	{
		return (NULL);
	}
}
