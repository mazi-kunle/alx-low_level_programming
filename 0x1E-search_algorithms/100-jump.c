#include "search_algos.h"
#include <math.h>

/**
 * linearSearch- A function that performs a linear search on an array.
 * @array: array to be searched.
 * @start: starting index to search.
 * @end: ending index to search.
 * @key: value to search for.
 *
 * Return: index
*/
int linearSearch(int *array, int start, int end, int key)
{
	int  i;

	for (i = start; i <= end; i++)
	{
		printf("pValue checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == key)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * jump_search- A function that performs a jump search on an array.
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to look for.
 *
 * Return: first index of value if found, else -1.
*/
int jump_search(int *array, size_t size, int value)
{
	/* blocksize */
	size_t m;
	int start, ans, i;

	m = sqrt(size);

	i = 0;
	while ((size_t) i < size)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			start = i;
			i = m;
			m = m + sqrt(size);
		}
		else if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				start, i);
			ans = linearSearch(array, start, i, value);
			return (ans);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n",
		start, i);


	return (linearSearch(array, start, start, value));
}
