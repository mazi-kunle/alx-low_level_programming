#include <stdio.h>
#include <string.h>
/**
 * main- a program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: 0 if success.
*/

int main(void)
{
	char s[];
	char *ptr;

	s = __FILE__;
	ptr = s;
	ptr = ptr + strlen(s);

	while (*ptr != '\\')
	{
		ptr--;
	}
	printf("%s\n", (ptr + 1));
	return (0);
}
