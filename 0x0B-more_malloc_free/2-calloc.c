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

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
