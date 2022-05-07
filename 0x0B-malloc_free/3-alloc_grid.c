#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid- function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: parameter.
 * @height: parameter.
 *
 * Return: a 2D array.
 *
*/

int **alloc_grid(int width, int height)
{
	int **temp, i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	temp = (int **)malloc(height * sizeof(int *));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		temp[i] = (int *)malloc(width * sizeof(int));
		if (temp[i] == NULL)
		{
			free(temp[i]);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			temp[j][k] = 0;
		}
	}
	return (temp);
}
