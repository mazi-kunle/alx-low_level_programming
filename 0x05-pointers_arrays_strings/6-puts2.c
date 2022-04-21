#include "main.h"
/**
 * puts2 - prints every other character of a string, starting from
 *        the first character followed by a new line.
 * @str: parameter.
 *
*/

void puts2(char *str)
{
	int length, i;

	if (*str != '\0')
	{
		_putchar(*str);
	}
	while (*str != '\0')
	{
		str = str + 2;
		_putchar(*str);
	}

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	for (i = length; i > 0; i--)
	{
		str--;
	}
	_putchar('\n');
}
