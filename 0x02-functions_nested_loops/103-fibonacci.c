#include <stdio.h>
/**
 * main - prints the sum of even  fibonacci numbers starting from 1.
 *
 * Return: 0 if success.
*/
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;
	unsigned long int sum = 0;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
		{
			break;
		}
		if ((c % 2) == 0)
		{
			sum = sum + c;
		}
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}
