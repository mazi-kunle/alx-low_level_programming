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
	while (*s != '\0')
	{
		s++;
	}
	while (*src != '\0')
	{
		*s = *src;
		src++;
		s++;
	}
	*s = '\0';
	return (dest);
}
