#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name- a function that prints a name.
 * @name: parameter.
 * @f: function.
 *
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
