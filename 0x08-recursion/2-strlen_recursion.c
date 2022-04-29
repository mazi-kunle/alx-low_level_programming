#include "main.h"
/**
 * _strlen_recursion- return the length of a string.
 * @s: parameter.
 * Return: int.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (_strlen_recursion(1 + s)));
}
