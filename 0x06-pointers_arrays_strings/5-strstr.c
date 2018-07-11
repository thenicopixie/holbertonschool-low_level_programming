#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locate substring
 * @haystack: string to check
 * @needle: substring to locate
 * Return: pointer at position of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, sublen, haylen, match = 0;

	for (sublen = 0; needle[sublen] != '\0'; sublen++)
	;
	for (haylen = 0; haystack[haylen] != '\0'; haylen++)
	;

	for (i = 0; haystack[i] - sublen + 1; i++)
	{
		for (j = 0; j < sublen; j++)
		{
			if (needle[j] == haystack[i + j])
			{
				match = 1;
			}
			else
			{
				match = 0;
				break;
			}
		}
		if (match == 1)
		{
			return (haystack + i);
		}
	}
	if (sublen == 0)
	{
		return (haystack);
	}
	return (NULL);
}
