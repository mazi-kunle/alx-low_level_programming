#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main- print a number.
 *
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: int.
*/

int main(int argc, char *argv[])
{
	if (argv[argc] == NULL)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

