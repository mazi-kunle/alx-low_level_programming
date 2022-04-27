#include "main.h"
/**
 * _memset- fill memory with a constant byte.
 * @s: parameter.
 * @b: parameter.
 * @n: parameter.
 * Return: char.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *temp;
	int i;

	temp = s;
	for (i = 1; i <= n; i++)
	{
		*temp = b;
		temp++;
	}
	return (s);
}
