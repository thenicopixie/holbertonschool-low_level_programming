#include "holberton.h"
/**
* _isupper - check is uppercase character
* @c: int to test
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
