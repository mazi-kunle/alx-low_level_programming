#include <stdio.h>
/**
 * main - prints the sum of even  fibonacci numbers starting from 1.
 *
 * Return: 0 if success.
*/
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int c = 2;
	unsigned long long int sum = 0;

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
	printf("%llu", sum);
	return (0);
}
