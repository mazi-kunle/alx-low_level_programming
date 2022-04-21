#include "main.h"
#include <stdio.h>
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

	for (i = 0; i < n - 1; i++)
	{
		b++;
	}

	while (*a != *b)
	{
		printf(*a);
		printf(",");
		printf(" ");
		a++;
	}
	printf("%d", *b);
	printf("\n");
}
