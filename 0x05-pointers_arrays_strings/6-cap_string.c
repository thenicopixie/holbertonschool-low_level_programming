#include "holberton.h"

/**
 * cap_string - capitalize first character of words
 * @p: pointer to string
 * Return: (p)
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			if (p[i - 1] == '\t' || p[i - 1] == '\n' || p[i - 1] == ' ' ||
						 p[i - 1] == '.' || p[i - 1] == ',' ||
						 p[i - 1] == ';' || p[i - 1] == '!' ||
						 p[i - 1] == '?' || p[i - 1] == '"' ||
						 p[i - 1] == '(' || p[i - 1] == ')' ||
						 p[i - 1] == '{' || p[i - 1] == '}')
			{
				p[i] = p[i] - 32;
			}
		}
	}
	return (p);
}
