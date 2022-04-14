#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting from 1.
 *
 * Return: 0 if success.
*/
int main(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int c;
	int count = 2;

	printf("%llu", a);
	printf(",");
	printf("%llu", b);

	while (count < 50)
	{
		c = a + b;
		printf(",");
		printf("%llu", c);
		a = b;
		b = c;

		count = count + 1;
	}
	return (0);
}
