#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s : parameter.
 *
 * Return : void
*/
void print_rev(char *s)
{
	char *end;
	int length;

	length = 0;
	end = s;

	while (*end != '\0')
	{
		end++;
		length++;
	}
	end--;
	length--;
	while (length >= 0)
	{
		_putchar(*end);
		end--;
		length--;
	}
	_putchar('\n');
}

