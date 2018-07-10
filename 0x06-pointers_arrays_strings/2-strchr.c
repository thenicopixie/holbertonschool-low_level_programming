#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - return first occurance of character
 * @s: string to search
 * @c: character to find
 * Return: pointer to first occurance, else return NULL
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (*(s + count) == c)
		{
			s += count;
			return (s);
		}
	}
	return (NULL);
}