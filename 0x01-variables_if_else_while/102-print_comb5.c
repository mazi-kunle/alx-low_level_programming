#include <stdio.h>
/**
 * main - a function.
 * Return: 0 if success.
*/
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 93 && b == 99)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
