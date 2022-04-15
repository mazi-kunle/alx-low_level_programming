#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14,
 *                followed by a new line.
 *
 * Return: void.
*/

void more_numbers(void)
{
	int a;
	int count;

	count = 0;
	while (count < 10)
	{
		for (a = 0; a < 15; a++)
		{
			_putchar(a + '0');
		}
		count = count + 1;
	}
	_putchar('\n');
}
