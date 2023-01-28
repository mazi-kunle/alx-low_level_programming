#include "search_algos.h"

/**
 * linear_search- a function that searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search for.
 *
 * Return: first index of value if found else -1.
*/

int linear_search(int *array, size_t size, int value)
{
	int *ptr;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	ptr = array;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, ptr[i]);
		if (ptr[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
