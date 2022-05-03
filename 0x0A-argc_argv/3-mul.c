#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- multiply two numbers.
 * @argc: argument.
 * @argv: argument.
 * Return: int.
*/

int main(int argc, char *argv[])
{
	int ans;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	ans = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", ans);
	return (0);
}
