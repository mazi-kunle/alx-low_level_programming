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
	char *ptr;

	ptr = str;
	length = 0;
	i = 0;
	while (*ptr != '\0')
	{
		ptr++;
		length++;
	}
	while (i <= length)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
