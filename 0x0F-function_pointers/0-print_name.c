#include "function_pointers.h"
/**
 * print_name- a function that prints a name.
 * @name: parameter.
 * @f: function.
 *
*/

oid print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
