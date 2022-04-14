#include "main.h"
/**
 * print_to_98 -  prints a number from n to 98.
 * @n : number to start from.
 *
 * Return: void.
*/
void print_to_98(int n)
{
	for (int a = n; a <= 98; a++)
	{
		_putchar(a + '0');
		_putchar(',');
		_putchar(' ');
	}
}
