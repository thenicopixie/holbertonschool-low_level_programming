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
	int i, j, count = 0, max_len = 0, len, index;

	char *first_match = NULL;


	for (count = 0; needle[count] != '\0'; count++)
	;
	max_len = count;

	if (count == 0)
	{
		return (haystack);
	}
	len = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < count; j++)
		{
			if (len < max_len)
			{
				if (needle[j] == haystack[i])
				{
					index = i;
					if (first_match == NULL)
					{
						first_match = &haystack[i];
					}
						i++;
						len++;
				}
			}
			else
			{
				len = 0;
				i++;
			}
		}
		if (len == max_len)
		{
			return (first_match);
		}
	}
	return (NULL);
}
