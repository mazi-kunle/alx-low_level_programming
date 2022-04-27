#include "main.h"
/**
 * print_chessboard- print the chessboard.
 * @a: parameter.
 * 
 * Return: void.
*/

void print_chessboard(char (*a)[8])
{
	int length, count;
  
  length = sizeof(a);
  count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < length; j++)
		{
			_putchar(a[i][j]);
		}
		count++;
		if (count < length)
		{
			_putchar('\n');
		}	
	}
}
