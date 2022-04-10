#include <stdlib.h>
#include <stdio.h>

/** 
 * main - This program that prints the alphabet in lowercase, 
 *        followed by a new line.
 *
 * Return: Always 0.
*/
int main()
{
	
	char c;
	for (c='a'; c<='z'; c++)
	{
		putchar(c);
		
	}
	putchar('\n');

	return 0;

}
