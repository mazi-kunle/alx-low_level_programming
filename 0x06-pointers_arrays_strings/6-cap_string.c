#include "main.h"
/**
 * *cap_string- capitalize a string.
 * @str:i parameter.
 * Return: char.
 *
*/

char *cap_string(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		if (*temp == '.' && *(temp + 1) == '\n')
		{
			temp = temp + 2;
			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		} else if (*temp == '\t' || *temp == 32)
		{
			temp = temp + 1;
			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		} else if (*temp == '.' && *(temp + 1) != 32)
		{
			temp = temp + 1;
			*temp = *temp - 32;
		} else
		{
			temp = temp + 0;
		}
		temp++;
	}
	return (str);
}
