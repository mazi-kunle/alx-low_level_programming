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

	if (separator == NULL)
	{
	}
	else
	{
		va_start(arglist, n);
		for (i = 0; i < (n - 1); i++)
		{
			if (va_arg(arglist, char *) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(arglist, char *));
			}
			printf("%s", separator);
		}
		if (va_arg(arglist, char *) == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", va_arg(arglist, char *));
		}
	}
}
