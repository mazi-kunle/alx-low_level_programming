#include "function_pointers.h"
/**
 * array_iterator- a function that executes a function given as
 * a parameter on each element of an array.
 * @array: parameter.
 * @size: parameter.
 * @action: parameter.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}