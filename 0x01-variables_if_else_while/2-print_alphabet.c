#include <stdlib.h>
#include <stdio.h>

/**
 * main - this function returns all the alphabets in small letters.
 *
 * Return: 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
