#include "main.h"
#include <stdlib.h>
/**
 * array_range- a function that creates an array of integers.
 * @min: parameter.
 * @max: parameter.
 * Return: int.
*/

int *array_range(int min, int max)
{
	int size, *ptr, *ptr2;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(size * sieof(int));
	ptr2 = ptr;
	while (min <= max)
	{
		*ptr2 = min;
		min++;
		ptr2++;
	}
	return (ptr);
}
