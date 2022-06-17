#include "main.h"
/**
 * print_triangle- a function that prints a triangle,
 * followed by a new line.
 * @size: size of triangle to be printed.
 *
*/

void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= rows; i++)
		{
			for (j = i; j < rows; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('*');
			}
			_putchar('\n');
		}
	}
}


