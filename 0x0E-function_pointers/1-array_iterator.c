#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - execute function on each element in array
 * @array: array of elements
 * @size: size of array
 * @action: pointer to action funciton
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0; /* index of array */

	if (array && size && action)
	{
		while (count < size)
		{	action(array[count]);
			count++;
		}
	}
}
