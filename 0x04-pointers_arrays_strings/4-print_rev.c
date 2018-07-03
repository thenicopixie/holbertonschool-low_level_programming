#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, len;
	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	i = len;

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
