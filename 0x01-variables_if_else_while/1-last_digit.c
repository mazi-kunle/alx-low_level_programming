#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a function.
 * Return: 0 if success.
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	last = n % 10;
	if (last > 5)
	{
		printf("%d and is greater than 5", last);
	} else if (last == 0)
	{
		printf("%d and is 0", last);
	} else if (last < 6 && last != 0)
	{
		printf("%d and is less than 6 ansd not 0", last);
	}
	printf("\n");
	return (0);
}


