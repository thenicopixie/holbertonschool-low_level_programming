#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: space to allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	 /* initialize pointer and allocate memory from b to pointer */
	void *ptr = malloc(b);

	if (b == 0)
	{
		return (NULL);
	}
	if (ptr == NULL) /* if malloc fails, exit with a status of 98 */
	{
		exit(98);
	}
	return (ptr);
}
