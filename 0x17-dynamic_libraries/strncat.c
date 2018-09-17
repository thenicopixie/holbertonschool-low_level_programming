#include "holberton.h"

/**
 * _strncat - concatenate string
 * @dest: string to concatenate to
 * @src: string to concatenate
 * @n: max byte value
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, destlen, srclen;

	destlen = 0;
	srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (j = 0; src[j]; srclen++)
	{
		if (srclen < n)
		{
		dest[destlen] = src[srclen];
		}
		destlen++;
		j++;
	}
	return (dest);

}
