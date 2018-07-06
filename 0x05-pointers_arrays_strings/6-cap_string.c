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
			if (p[0] >= 'a' && p[0] <= 'z')
			{
				p[0] = p[0] - 32;
			}
			else if (p[i - 1] == '\t' || p[i - 1] == '\n' || p[i - 1] == ' ' ||
						 p[i - 1] == '.' || p[i - 1] == ',' ||
						 p[i - 1] == ';' || p[i - 1] == '!' ||
						 p[i - 1] == '?' || p[i - 1] == '"' ||
						 p[i - 1] == '(' || p[i - 1] == ')' ||
						 p[i - 1] == '{' || p[i - 1] == '}')
			{
				p[i] = p[i] - 32;
			}
		}
		if (p[i] == '\t')
		{
			p[i] = ' ';
		}
	}
	return (p);
}
