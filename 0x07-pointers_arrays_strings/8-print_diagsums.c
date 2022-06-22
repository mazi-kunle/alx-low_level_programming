#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- a function that prints the two diagonals
 * of a square matrix.
 * @a: parameter.
 * @size: size of the matrix.
 *
*/

void print_diagsums(int *a, int size)
{
	int lsum = 0;
	int rsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		lsum = lsum + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = 0; i < size; i++)
	{
		rsum = rsum + a[i];
		a = a - size;
	}
	printf("%d, %d\n", lsum, rsum);
}
