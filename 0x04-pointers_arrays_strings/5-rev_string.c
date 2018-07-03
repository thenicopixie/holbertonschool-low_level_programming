#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j, temp, mid;

	i = _strlen(s)-1;
	j = 0;
	mid = i / 2;

	for (; i >= mid; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;	
	}
}
/**
 * _strlen - return length of string
 * @s: string to check
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;
	return (length);
}
