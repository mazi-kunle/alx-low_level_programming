#include "main.h"
/**
 * _isdigit- checks for a digit.
 * @c : character to be cheked.
 *
 * Return: 1 if uppercase, 0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

