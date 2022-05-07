#include <stdlib.h>
#include "main.h"
/**
 * free_grid- a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: a 2D array.
 * @height: parameter.
 *
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
