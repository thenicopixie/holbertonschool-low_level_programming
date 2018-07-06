#include "holberton.h"

/**
 * _strncpy - copy a string
 * @dest: file to copy to
 * @src: string to copy
 * @n: max byte value for copy string
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for ( ; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
