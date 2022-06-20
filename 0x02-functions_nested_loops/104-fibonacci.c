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
	unsigned long int count = 1;

	while (count < 98)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
		count++;
	}
	c = a + b;
	printf("%lu\n", c);
	return (0);
}
