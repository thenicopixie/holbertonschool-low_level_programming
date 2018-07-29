#include "holberton.h"

/**
 * _strspn - return number of bytes from accept that match s up to num bytes
 * @s: string to check
 * @accept: string to match
 * Return: number of bytes that match
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i != k)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
			}
		}
	}
	return (k);
}
