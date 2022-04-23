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
	while (*dest != '\0')
	{
		dest++;
	}
	dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
