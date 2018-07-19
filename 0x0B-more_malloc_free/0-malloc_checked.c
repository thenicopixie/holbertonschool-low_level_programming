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
	int *ptr = malloc(sizeof(int) * b); /* initialize pointer and allocate memory from b to pointer */

	if (ptr == NULL) /* if malloc fails, exit with a status of 98 */
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
