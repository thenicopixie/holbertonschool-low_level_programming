#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to duplicated string, or NUll
 */
char *_strdup(char *str)
{
	int i, j;

	char *str_ptr;

/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}
/* Get length of str */
	for (i = 0; str[i] != '\0'; i++)
	;
/* allocate memory to str_ptr */
	str_ptr = malloc(sizeof(char) * i);
/* check if str_ptr is NULL */
	if (str_ptr == NULL)
	{
		return (NULL);
	}
/* assign values from str to str_ptr */
	for (j = 0; j < i; j++)
	{
		str_ptr[j] = str[j];
	}
	return (str_ptr);
}
