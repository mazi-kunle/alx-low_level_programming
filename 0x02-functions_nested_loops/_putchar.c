#include "main.h"
#include <unistd.h>
/**
 * _putchar- mimick the putchar function.
 * @s: parameter.
 *
 * Return: 1.
*/
int _putchar(char s)
{
	return (write(1, &s, 1));
}

