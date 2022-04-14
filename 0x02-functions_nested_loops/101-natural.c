#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: 0 if success.
 *
*/
int main(void)
{
	int a = 1;
	int sum = 0;

	while (a < 1024)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			sum = sum + a;
		}
		a++;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
