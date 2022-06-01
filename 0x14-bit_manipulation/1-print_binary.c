#include "main.h"
#include <stdio.h>

/**
 * print_binary- a function that prints the binary
 * representation of a number.
 * @n: parameter.
 *
*/

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << 31; i > 0; i = i >> 1)
	{
		(n & i) ? printf("1") : printf("0");
	}
}
