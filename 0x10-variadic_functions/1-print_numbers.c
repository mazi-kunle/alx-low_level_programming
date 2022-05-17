#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- a function that prints numbers,
 * followed by a new line.
 * @separator: parameter.
 * @n: parameter.
 * Return: void.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", va_arg(arglist, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("%d\n", va_arg(arglist, int));
	va_end(arglist);
}
