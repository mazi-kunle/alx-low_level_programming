#include "main.h"
/**
 * leet- encodees a string.
 * @str: parameter.
 *
 * Return: char
*/

char *leet(char *str)
{
	char *end;
	char sym[10] = "aeotlAEOTL";
	char num[10] = "4307143071";
	int i;

	end = str;
	while (*end != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*end == sym[i])
			{
				*end = num[i];
			}
		}
		end++;
	}
	return (str);
}
