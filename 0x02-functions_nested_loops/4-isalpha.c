#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - entry point
 * program to check for alpha letters
 * @c: the character to test
 * Return: 1 if alpha, 0 if otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
