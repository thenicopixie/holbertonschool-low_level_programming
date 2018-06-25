#include "holberton.h"
#include <ctype.h>
/**
* _islower - check for lowercase character
* @c: character to test
* Return: 0
*
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
