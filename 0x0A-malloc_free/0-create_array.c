#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: array
 * Return: NULL if size is 0, NULL if it fails, or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
