#include "main.h"
#include <stdio.h>
/**
 * getprime- a function that gets the first prime number that
 * divides a number evenly.
 * @n: parameter.
 *
 * Return: the prime number.
*/
int getprime(unsigned long int n)
{
	unsigned long int prime;

	for (prime = 2; prime <= n; prime++)
	{
		if (n % prime == 0)
		{
			break;
		}
	}
	return (prime);
}

/**
 * main- main function to test the program.
 *
 * Return: int.
*/
int main(void)
{
	int lsp, max;
	unsigned long int num;

	num = 612852475143;
	while (num != 1)
	{
		lsp = getprime(num);
		if (lsp > max)
		{
			max = lsp;
		}
		num = num / lsp;
	}
	printf("%d\n", lsp);
	return (0);
}
