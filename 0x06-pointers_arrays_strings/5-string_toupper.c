#include "main.h"
/**
 * string_toupper- change all lowercase to uppercase.
 * @str: string to be checked.
 *
 * Return: char.
*/

char *string_toupper(char *str)
{
	char *temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 97 && *temp <= 122)
		{
			*temp = *temp - 32;
		} else
		{
			*temp = *temp + 0;
		}
		temp++;
	}
	return (str);
}
