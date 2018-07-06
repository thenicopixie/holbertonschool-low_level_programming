#include "holberton.h"

/**
 * _strcat - concatenate strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int count1, count2, destlen, srclen;

	destlen = 0;
	srclen = 0;

	for (count1 = 0; dest[count1] != '\0'; count1++)
	{
		destlen++;
	}
	for (count2 = 0; src[count2] != '\0';  srclen++)
	{
		dest[destlen] = src[srclen];
		count2++;
		destlen++;
	}
	return (dest);
}
