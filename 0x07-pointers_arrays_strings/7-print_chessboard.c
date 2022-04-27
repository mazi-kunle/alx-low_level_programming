#include "main.h"
#include <stdio.h>
/**
 * print_chessboard- print the chessboard.
 * @a: parameter.
 * Return: void.
*/

void print_chessboard(char (*a)[8])
{
	int length, count, i, j;

	count = 0;
	length = sizeof(a);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < length; j++)
		{
			_putchar(a[i][j]);
		}
		count++;
		if (count <= length)
		{
			_putchar('\n');
		}
	}
}
