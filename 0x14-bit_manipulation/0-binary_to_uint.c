#include "main.h"
#include <string.h>

/**
 * power- a function that performs exponential
 * operation on a number.
 * @num: parameter.
 * @power: parameter.
 *
 * Return: int.
*/
int power(int num, int power)
{
	int ans, count;

	ans = 1;
	count = 0;
	while (count != power)
	{
		ans = ans * num;
		count++;
	}
	return (ans);
}

/**
 * binary_to_uint- a function that converts a binary
 * number to an unsigned int.
 * @b: parameter.
 *
 * Return: unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	int length, x;
	unsigned int bin;
	const char *temp;

	length = strlen(b);
	bin = 0;
	temp = b;
	if (b == NULL)
	{
		return (0);
	}
	while (*temp != '\0')
	{
		if (*temp == '0' || *temp == '1')
		{
			x = *temp - '0';
			bin = bin + x * power(2, length - 1);
			length--;
			temp++;
		}
		else
		{
			return (0);
		}
	}
	return (bin);
}
