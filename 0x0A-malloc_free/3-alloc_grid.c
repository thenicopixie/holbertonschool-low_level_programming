#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: collumns
 * @height: rows
 * Return: NULL if failure or return pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, **ptr, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < height; k++)
	{
		ptr[k] = malloc(sizeof(int) * width);
		if (ptr[k] == NULL && k >= 0)
		{
			while (k >= 0)
			{
				free(ptr[k]);
				k--;
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
