#include "search_algos.h"

/**
 * binary_search - search for a value in a sorted array of integers
 * @array: pointer to first element in an array
 * @size: size of the array
 * @value: value to search for
 * Return: index of value, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);
	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			printf("%x", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
