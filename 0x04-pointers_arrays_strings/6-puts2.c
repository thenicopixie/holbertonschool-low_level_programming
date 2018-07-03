#include "holberton.h"
/**
 * puts2 - print one out of 2 characters of a string
 * @str: string to print
 */
void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0 || i == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
