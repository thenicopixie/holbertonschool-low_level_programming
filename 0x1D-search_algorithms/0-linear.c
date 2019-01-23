#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: pointer to first element in array
 * @size: size of array
 * @value: value to find
 * Return: index if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
