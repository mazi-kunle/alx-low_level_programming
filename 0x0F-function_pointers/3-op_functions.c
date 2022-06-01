#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add- returns the sum of a and b.
 * @a: parameter.
 * @b: parameter.
 * Return: int.
*/

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub- returns the difference of a and b.
 * @a: parameter.
 * @b: parameter.
 * Return: int.
*/
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return (sub);
}
/**
 * op_mul- returns the product of a and b.
 * @a: parameter.
 * @b: parameter.
 * Return: int.
*/
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div- returns the result of the division of a by b.
 * @a: parameter.
 * @b: parameter.
 * Return: int.
*/
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}
/**
 * op_mod- returns the remainder of the division of a by b.
 * @a: parameter.
 * @b: parameter.
 * Return: int.
*/
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod = a % b;
	return (mod);
}

