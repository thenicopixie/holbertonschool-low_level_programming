#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: elements in array to be allocated
 * @size: size of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);
 	if (nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
