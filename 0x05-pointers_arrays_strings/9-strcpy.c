#include "main.h"
/**
 * _strcpy - copy a string from one destination to another.
 * @dest: parameter.
 * @src: parameter.
 *
 * Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr1, *ptr2;

	ptr1 = dest;
	ptr2 = src;
	while (*ptr2 != '\0')
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
	*ptr1 = '\0';
	return (dest);
}
