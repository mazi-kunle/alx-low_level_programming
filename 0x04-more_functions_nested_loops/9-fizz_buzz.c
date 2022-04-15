#include <stdio.h>
/**
 * main - prints the fizzbuzz program.
 *
 * Return: 0 if success.
 *
*/

int main(void)
{
	for (int a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("Fizz Buzz");
		} else if ((a % 3) == 0)
		{
			printf("Fizz");
		} else if ((a % 5) == 0)
		{
			printf("Buzz");
		} else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}
	}
	printf('\n');
	return (0);
}
