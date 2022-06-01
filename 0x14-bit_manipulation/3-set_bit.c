#include "main.h"
#include <stdio.h>
/**
 * set_bit- a function that sets the value of a bit at
 * a given index.
 * @n: parameter.
 * @index: parameter.
 *
 * Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *temp;

	temp = n;
	if (index < 31)
	{
		return (1);
		temp = (1 << index) | *temp;
	}
	return (-1);
}
