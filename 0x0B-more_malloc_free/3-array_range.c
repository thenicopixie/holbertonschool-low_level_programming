#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array or integers
 * @min: value
 * @max: value
 * Return: pointer to newly allocated array
 */
int *array_range(int min, int max)
{
	int *ptr, i = min, count = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(unsigned int) * (max - min + 1));
	while (i <= max)
	{
		ptr[count] = i;
		count++;
		i++;
	}
	return (ptr);
}
