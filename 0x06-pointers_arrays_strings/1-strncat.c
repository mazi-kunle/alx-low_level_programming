#include "main.h"
/**
 * _strncat - concatenate a string.
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 *
 * Return: char.
*/

char *_strncat(char *dest, char *src, int n)
{
	int length;

	length = 0;
	while (*src != '\0')
	{
		length++;
		src++;
	}
	while (*dest != '\0')
	{
		dest++;
	}
	if (n < length)
	{
		for (i = 0; i < n; i++)
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	} else
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	}
	return (dest);
}
