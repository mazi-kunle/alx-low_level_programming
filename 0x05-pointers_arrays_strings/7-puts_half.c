#include "main.h"
/**
 * puts_half - prints the second half of a string.
 * @str: parameter.
 *
*/

void puts_half(char *str)
{
	int n;
	int length;
	int i;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}

	if (length % 2 == 0)
	{
		n = length / 2;
	} else
	{
		n = ((length - 1) / 2) + 1;
	}

	for (i = 0; i < n + 1; i++)
	{
		str++;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
