#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str : parameter.
 *
 * Return : void.
 *
*/

void _puts(char *str)
{
	for (i = 0; *str != '\0'; str++, i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
