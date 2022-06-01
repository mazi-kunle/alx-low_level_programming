#include "main.h"
/**
 * get_endianness- a function that checks the endianness.
 *
 * Return: int.
*/
int get_endianness(void)
{
	unsigned int i;
	char *s;

	i = 1;
	s = (char *)&i;
	if (*s)
	{
		return (1);
	}
	return (0);
}
