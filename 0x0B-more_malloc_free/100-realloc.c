#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of allocated ptr
 * @new_size: size in bytes of new memory block
 * Return: pointer to memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int len1 = 0, len2 = 0;

	char *dest;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if ((new_size = 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (len1 = 0; len1 < new_size; len1++)
		{
			dest[len1] = *((char *)ptr + len1);
		}
	}
	if (new_size < old_size)
	{
		for (len2 = 0; len2 < old_size; len2++)
		{
			dest[len2] = *((char *)ptr +len2);
		}
	}
	free(ptr);
	return (dest);
}
