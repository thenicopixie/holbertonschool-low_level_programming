#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - free 2-D array
 * @grid: 2-Dimensional array
 * @height: heiht of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
