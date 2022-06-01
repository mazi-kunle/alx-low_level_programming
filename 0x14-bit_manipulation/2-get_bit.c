#include "main.h"
#include <stdio.h>
/**
 * get_bit- a function that returns the value of a bit at
 * a given index.
 * @n: parameter.
 * @index: parameter.
 *
 * Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus;

	bitstatus = (n >> index) & 1;
	if (index < 31)
	{
		return (bitstatus);
	}
	return (-1);
}
