#include "holberton.h"
/**
* _isupper - check is uppercase character
* @c: int to test
* Return: (1) if character is uppercase, else (0) if not uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
