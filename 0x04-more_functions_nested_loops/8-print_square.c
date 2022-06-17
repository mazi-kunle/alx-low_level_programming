#include "main.h"
/**
 * print_square - print a square.
 * @size: integer to determmine the size of the square.
 *
 * Return: void.
*/

void print_square(int size)
{
	int count, a;

	count = 1;
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		while (count <= size)
		{
			for (a = 1; a <= size; a++)
			{
				_putchar('#');
			}
			count = count + 1;
			if (count <= size)
			{
				_putchar('\n');
			}
		}
	}
}

