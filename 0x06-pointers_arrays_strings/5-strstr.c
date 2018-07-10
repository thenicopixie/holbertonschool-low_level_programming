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
	int i, j, sublen = 0, max_len = 0, matchlen;

	char *first_match = NULL;


	for (sublen = 0; needle[sublen] != '\0'; sublen++)
	;
	max_len = sublen;

	if (sublen == 0)
	{
		return (haystack);
	}
	matchlen = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (matchlen < max_len)
			{
				if (needle[j] == haystack[i])
				{
					if (first_match == NULL)
					{
						first_match = &haystack[i];
					}
						i++;
						matchlen++;
				}
			}
			else
			{
				first_match = NULL;
				matchlen = 0;
				i++;
			}
		}
		if (matchlen == max_len)
		{
			return (first_match);
		}
	}
	return (NULL);
}
