#include "main.h"
/**
 * _memcpy- copy memory area.
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 * Return: char.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp;
	unsigned int i;

	temp = dest;
	for (i = 1; i <= n; i++)
	{
		*temp = *src;
		src++;
		temp++;
	}
	return (dest);
}
