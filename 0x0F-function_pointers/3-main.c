#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- main function.
 * @argc: argument.
 * @argv: argument.
 * Return: int.
*/

int main(int argc, char **argv)
{
	int a, b, ans;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = ptr(a, b);
	if (ans != 100)
	{
		printf("%d\n", ans);
	} else
	{
		ptr(a, b);
	}
	return (0);
}
