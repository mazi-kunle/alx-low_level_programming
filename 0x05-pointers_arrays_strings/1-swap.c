#include "main.h"
/**
 * swap_int - swap the values of two integers.
 * @a : first number.
 * @b : second number.
 *
 * Return: void.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
