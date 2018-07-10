#include "holberton.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer to adress of value
 * @b: constant byte
 * @n: bytes of s to fill
 * Return: pointer to pointer address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
