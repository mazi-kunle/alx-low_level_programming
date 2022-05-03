#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main- add positive numbers.
 * @argc: argument.
 * @argv: argument.
 * Return: int.
*/

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				sum = sum + atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
