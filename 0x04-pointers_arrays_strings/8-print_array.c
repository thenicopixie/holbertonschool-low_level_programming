#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of array
 * @a: array elements
 * @n: element to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i < n - 1)
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}
