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
	char *p;

	p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n--)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
