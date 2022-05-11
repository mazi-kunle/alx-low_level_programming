#include <stdio.h>
#include <string.h>
/**
 * main- a program that prints the name of the file it was compiled from,
 * followed by a new line.
 * Return: 0 if success.
*/

int main(void)
{
	char *s;

	s = __FILE__;
	printf("%s\n", s);
	return (0);
}
