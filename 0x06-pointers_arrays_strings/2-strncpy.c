#include "main.h"
/**
 * _strncpy- copy a string.
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 *
 * Return: char.
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p;

	p = dest;
	while (*src != '\0' && n--)
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
