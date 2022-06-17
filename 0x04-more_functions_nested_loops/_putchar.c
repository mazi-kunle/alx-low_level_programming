#include "main.h"
/**
 * _putchar- a putchar function.
 *
 * @s: parameter.
 * Return: int.
 *
*/

int _putchar(char s)
{
	return (write(1, &s, 1));
}
