#include "main.h"
/**
 * _isupper- checks for uppercase letters.
 * @c : character to be cheked.
 *
 * Return: 1 if uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	char a;

	for (a = 65; a < 91; a++)
	{
		if (a == c)
		{
			return (1);
		}
		return (0);
	}
}

