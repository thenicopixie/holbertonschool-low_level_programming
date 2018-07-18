#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * argstostr - concatenate all arguemnts in program
 * @ac: number of arguments
 * @av: arguments passed
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k, tmp = 0, a;

	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < ac; k++)
	{
		for (a = 0; av[k][a] != '\0'; a++)
		{
			len++;
		}

	}
	ptr = malloc(sizeof(char) * (ac + len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[tmp] = av[i][j];
			tmp++;
		}
		ptr[tmp] = '\n';
		tmp++;
	}
	ptr[tmp] = '\0';
	return (ptr);
}
