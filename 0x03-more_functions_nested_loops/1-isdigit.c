#include "holberton.h"
/**
* _isdigit - check if value is digit
* @c: value to check
* Return: (1) if value is digit, else (0) if not digit
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
