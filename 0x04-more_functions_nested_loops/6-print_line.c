#include "main.h"
/**
 * print_line - prints a straight line according to the integer given.
 * @n : integer to be printed as a line.
 *
 * Return : void.
*/

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

