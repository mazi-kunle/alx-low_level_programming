#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all- a function that returns the sum of
 * all its parameters.
 * @n: first parameter.
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	int result;
	unsigned int i;

	result = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(arglist, int);
	}
	va_end(arglist);
	return (result);
}

