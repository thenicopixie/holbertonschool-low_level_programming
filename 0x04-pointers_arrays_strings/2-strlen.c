#include "holberton.h"
/**
 * _strlen - return length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	;

	return (length);
}
