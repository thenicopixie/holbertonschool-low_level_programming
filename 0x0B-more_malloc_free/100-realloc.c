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
	unsigned int len;
	char *dest;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		dest = malloc(new_size);
		if (dest == NULL)
			return (NULL);
		return (dest);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (len = 0; len < old_size; len++)
			dest[len] = *((char *)ptr + len);
	}
	if (new_size < old_size)
	{
		for (len = 0; len < new_size; len++)
			dest[len] = *((char *)ptr + len);
	}
	free(ptr);
	return (dest);
}
