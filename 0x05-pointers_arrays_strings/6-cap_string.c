#include "holberton.h"

/**
 * cap_string - capitalize first character of words
 * @p: pointer to string
 * Return: (p)
 */
char *cap_string(char *p)
{
	int i, j;

	char seper[13] = {' ', '\t', '\n',
'.', ';', ',', '!', '?',
'"', '(', ')', '{', '}'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (p[i] == seper[j] && p[i + 1] >= 'a' && p[i + 1] <= 'z')
			{
				p[i + 1] = p[i + 1] - 32;

			}
			if (p[0] >= 'a' && p[0] <= 'z')
			{
				p[0] = p[0] - 32;
			} 
		}
	}
	return (p);
}
