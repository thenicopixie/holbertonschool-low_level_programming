#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes from memory area src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
