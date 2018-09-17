#include "holberton.h"
/**
 * _strcpy - copy string to buffer
 * @dest: destination
 * @src: string to copy
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = _strlen(src);
	*dest = len;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
