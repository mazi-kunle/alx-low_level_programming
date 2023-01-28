#include "search_algos.h"

/**
 * print_array- a functoin that prints an array.
 * @array: array to print.
 * @start: start of the array.
 * @end: end of the array.
 *
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;
	int flag;

	flag = 0;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("%d", array[i]);
		flag = 1;
	}
	printf("\n");
}

/**
 * binary_search- a function that wraps the binarySearch function
 *
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to search for.
 *
 * Return: index where value is located of found, otherwise -1.
*/
int binary_search(int *array, size_t size, int value)
{
	int answer;

	answer = binarySearch(array, 0, size - 1, value);
	return (answer);
}

/**
 * binarySearch- a binary search function.
 *
 * @array: array to search.
 * @start: start of the array.
 * @end: end of the array.
 * @value: value to search for.
 *
 * Return: index where value is located of found, otherwise -1.
*/

int binarySearch(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	int *ptr = array;

	if (array == NULL)
	{
		return (-1);
	}

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		print_array(ptr, start, end);

		/* if found at mid return mid */
		if (ptr[mid] == value)
		{
			return (mid);
		}

		/* search left half */
		if (ptr[mid] > value)
		{
			return (binarySearch(array, start, mid - 1, value));
		}

		/* search right half */
		return (binarySearch(array, mid + 1, end, value));
	}
	/* value not found */
	return (-1);
}
