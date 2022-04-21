#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s : parameter.
 *
 * Return : void
*/
void print_rev(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = 0;
	begin = s;
	end = s;

	while (*s != '\0')
	{
		length = length + 1;
		s++;
	}

	for (c = 0; c < (length - 1); c++)
		end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		_putchar(*begin);
		begin++;
		end--;
	}
	_putchar('\n');
}
