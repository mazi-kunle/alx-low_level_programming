#include "main.h"
#include <stdio.h>
/**
 * flip_bits- a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: parameter.
 * @m: parameter.
 *
 * Return: int.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num, count;

	num = n ^ m;
	count = 0;
	while (num > 0)
	{
		count++;
		num = num & (num - 1);
	}
	return (count);
}
