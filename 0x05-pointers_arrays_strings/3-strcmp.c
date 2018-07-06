#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: (0) or diff
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		if (s1[i] != s2[i])
		{
			diff =  s1[i] - s2[i];
			break;
		}
	}
	return (diff);
}
