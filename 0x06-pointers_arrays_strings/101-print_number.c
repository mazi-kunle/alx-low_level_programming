#include "main.h"
/**
 * print_number- prints an integer.
 * @n: parameter.
 *
 * Return: void
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		n = n / 10;
		print_number(n);
	}
	_putchar(n % 10 + '0');
}
