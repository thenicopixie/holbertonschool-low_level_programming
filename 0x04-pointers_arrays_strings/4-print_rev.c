#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);

	for (; i >= 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
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
