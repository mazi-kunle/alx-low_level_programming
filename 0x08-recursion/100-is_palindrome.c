#include "main.h"
#include <stdio.h>
/**
 * is_palindrome- check if a string is a palindrome.
 * @str: parameter.
 * @s: start.
 * @e: end.
 * @s: parameter.
 *
 * Return: int.
*/
int check(char str[], int s, int e)
{
	if (s == e)
	{
		return (1);
	}
	if (str[s] != str[e])
	{
		return (0);
	}
	if (s < e + 1)
	{
		return (check(str, s + 1, e - 1));
	}
}

int is_palindrome(char *s)
{
	int n;

	n = strlen(s);
	if (n == 0)
	{
		return (1);
	}
	return (check(s, 0, n - 1));
}
