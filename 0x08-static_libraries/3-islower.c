#include "holberton.h"
/**
* _islower - check for lowercase character
* @c: character to test
* Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
