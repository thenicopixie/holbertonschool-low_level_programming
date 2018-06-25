#include "holberton.h"
/**
* print_sign - program to print is number is zero, positive, or negative
* @n: number to test
* Return: 1 is positive, 0 if zero, -1 is negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
