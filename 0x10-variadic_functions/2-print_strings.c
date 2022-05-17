#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings- a function that prints strings,
 * followed by a new line.
 * @separator: parameter.
 * @n: parameter.
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	char *s;
	unsigned int count;

	va_start(arglist, n);
	count = 1;
	for (i = 0; i < n; i++)
	{
		s = va_arg(arglist, char *);
		s = s == NULL ? "(nil)" : s;
		printf("%s", s);
		while (count != n)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
			count++;
		}
	}
	printf("\n");
	va_end(arglist);
}
