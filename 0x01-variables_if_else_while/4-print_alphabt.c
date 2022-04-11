#include <stdio.h>
/**
 * main - a function.
 * Return: 0 if success.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' || c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
