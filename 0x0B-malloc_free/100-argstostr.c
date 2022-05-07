#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr- a function that concatenates all the
 * arguments of your program.
 * @ac: parameter.
 * @av: parameter.
 * Return: char.
 *
*/

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	char *s1;
	char *s2;
	char *temp;
	int length, i, j;

	length = 0;
	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i]);
	}
	s1 = malloc(length * sizeof(char) + ac + 1);
	temp = s1;

	for (j = 0; j < ac; j++)
	{
		s2 = av[j];
		while (*s2)
		{
			*s1 = *s2;
			s1++;
			s2++;
		}
		*s1 = '\n';
		s1++;
	}
	*s1 = '\0';
	return (temp);
}

