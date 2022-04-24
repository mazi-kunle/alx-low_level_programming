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

	end = str;
	while (*str != '\0')
	{
		for (int i = 0; i < 10; i++)
		{
			if (*str == sym[i])
			{
				*str = num[i];
			}
			str++;
		}
	}
	return (end);
}
