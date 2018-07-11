#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of two diagonals of a square matrix of integers
 * @a: array of numbers
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + (size * i) + j);
			}
			if (i + j == size - 1)
			{
				sum2 += *(a + (size * i) + j);
			}
		}
	}
	printf("%i, %i\n", sum1, sum2);
}
