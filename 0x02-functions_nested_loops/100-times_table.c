#include "main.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: parameter.
 *
*/
void print_times_table(int n)
{
	int num, mult, prod, first, second;

	if (n < 15 || n > 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (mult = 1; mult <= n; mult++)
			{
				prod = num * mult;
				if (prod > n && n > 99)
				{
					first = prod / 10;
					_putchar((first / 10) + '0');
					second = first % 10;
					_putchar(second + '0');
				}
				else if (prod >n)
				{
					_putchar((prod / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((prod % 10) + '0');
				if (mult < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
