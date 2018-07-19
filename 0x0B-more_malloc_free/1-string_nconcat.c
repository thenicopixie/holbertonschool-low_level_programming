#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
/**
 * _strcpy - copy string to buffer
 * @dest: destination
 * @src: string to copy
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concat to pointer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int len1, len2, i;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL) /* check if NULL is passed to s1 */
		s1 = "";
	if (s2 == NULL) /* check if NULL is passed to s2 */
		s2 = "";
	if (n < len2) /* allocate memory to pointer */
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
		if (ptr == NULL)
			return (NULL);
		_strcpy(ptr, s1);
		for (i = 0; i < n; i++)
		{
			ptr[len1] = s2[i];
			len1++;
		}
	}
	else  /* allocate memory to pointer */
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 2));
		if (ptr == NULL)
			return (NULL);
		_strcpy(ptr, s1);
		for (i = 0; i < len2; i++)
		{
			ptr[len1] = s2[i];
			len1++;
		}
	}
	ptr[len1] = '\0';
	return (ptr);
}
