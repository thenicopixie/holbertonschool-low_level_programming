#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j, temp;

	j = 0;
	i = j + _strlen(s) - 1;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
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
