#include "main.h"
/**
 * puts2 - prints every other character of a string, starting from
 *        the first character followed by a new line.
 * @str: parameter.
 *
*/

void puts2(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
	}
	while (*str != '\0')
	{
		str = str + 2;
		_putchar(*str);
	}
	_putchar('\n');
}
