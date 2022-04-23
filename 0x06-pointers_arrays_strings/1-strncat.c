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
	char *p;

	length = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
