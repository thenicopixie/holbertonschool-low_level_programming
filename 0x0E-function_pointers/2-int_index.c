#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of found int, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0; /* curent index of array */

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		while (count < size)
		{
			if (cmp(array[count]))
				return (count);
			count++;
		}
	}
	return (-1);
}
