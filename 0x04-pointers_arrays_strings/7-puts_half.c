#include "holberton.h"
/**
 * puts_half - print half of string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i, len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else if (len % 2 != 0)
	{
		if (len != 1)
		{
			i = (len - 1) / 2;
		}
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
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
