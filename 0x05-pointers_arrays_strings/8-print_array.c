#include "main.h"
/**
 * print_array - printf n elements of array.
 * @a : parmeter.
 * @n : parameter.
 *
*/

void print_array(int *a, int n)
{
	int *b = a;
	int i;

	for (i = 0; i < n; i++)
	{
		b++;
	}

	while (*a != *b)
	{
		_putchar(*a);
		_putchar(',');
		a++;
	}
	_putchar(*b);
	_putchar('\n');
}
