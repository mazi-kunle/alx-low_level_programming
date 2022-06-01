#include "main.h"
#include <stdio.h>
/**
 * clear_bit- a function that sets the value of a bit at
 * a given index to 0.
 * @n: parameter.
 * @index: parameter.
 *
 * Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *temp;

	temp = n;
	if (index < 31)
	{
		*temp = (1 << index) & *temp;
		return (1);
	}
	return (-1);
}
