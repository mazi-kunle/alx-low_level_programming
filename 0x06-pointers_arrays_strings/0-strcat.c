#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : first pointer.
 * @src : second pointer.
 *
 * Return: a pointer.
*/

char *_strcat(char *dest, char *src)
{
	char *s;

	s = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*s = *src;
		src++;
		st++;
	}
	*s = '\0';
	return (dest);
}
