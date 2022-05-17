#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all- a function that prints anything.
 * @format: parameter.
*/
void print_all(const char * const format, ...)
{
	const char *ptr;
	char *s;
	int count;
	va_list arglist;

	va_start(arglist, format);
	ptr = format;
	count = 0;
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c, ", va_arg(arglist, int));
				break;
			case 'i':
				printf("%d, ", va_arg(arglist, int));
				break;
			case 'f':
				printf("%f, ", va_arg(arglist, double));
				break;
			case 's':
				s = va_arg(arglist, char *);
				if (s != NULL)
				{
					printf("%s", s);
					count++;
				}
				if (count == 0)
				{
					printf("(nil)");
				}
				break;
			}
		ptr++;
	}
	printf("\n");
	va_end(arglist);
}
