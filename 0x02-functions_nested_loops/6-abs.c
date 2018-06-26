#include "holberton.h"
/**
 * _abs - compute absolute value of integer
 * @i: int to test
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
