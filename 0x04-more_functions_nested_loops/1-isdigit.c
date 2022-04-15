#include "main.h"
/**
 * _isdigit- checks for a digit.
 * @c : character to be cheked.
 *
 * Return: 1 if uppercase, 0 otherwise.
*/

int _isdigit(int c)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		if (a == c)
		{
			return (1);
		}
		return (0);
	}
}

