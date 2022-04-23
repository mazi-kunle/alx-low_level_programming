#include "main.h"
/**
 * reverse_array- reverse an array in place.
 * @a: array
 * @n: number of element of the array
*/

void reverse_array(int *a, int n)
{
	int *start, *end, temp;
	int i;

	start = a;
	end = a;
	for (i = 0; i < n - 1; i++)
	{
		end++;
	}
	for (i = 0; i < (n / 2); i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		end--;
		start++;
	}
}

