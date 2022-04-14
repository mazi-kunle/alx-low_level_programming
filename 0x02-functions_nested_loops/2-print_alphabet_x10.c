#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase.
 *
 * Returns : void.
*/
void print_alphabet_x10(void)
{
	int a = 1;
	char b;

	while (a <= 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}
