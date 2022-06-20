#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting from 1.
 *
 * Return: 0 if success.
*/
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int count = 2;

	printf("%lu", a);
	printf(", ");
	printf("%lu", b);

	while (count < 50)
	{
		c = a + b;
		printf(", ");
		printf("%lu", c);
		a = b;
		b = c;

		count = count + 1;
	}
	printf("\n");
	return (0);
}
